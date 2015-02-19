/***************************************************************************
 *   Copyright (C) 2008 by Lucas V. Hartmann <lucas.hartmann@gmail.com>    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "ihx.h"
#include <cctype>

//#define DEBUG
//#include "debug.h"
#define debug_say(s) ;
#ifdef DEBUG
#include "straux.h"
#endif

using namespace std;

#define NO_HEX uint(-1)
uint ihx::decode_hex(char ch) {
	static const char conv[]="0123456789ABCDEFabcdef";
	uint i=0;
	while (conv[i] && conv[i]!=ch) i++;
	if (!conv[i]) return NO_HEX;
	return (i<=15) ? i : i-6; // fix lowercase indexes
}

bool ihx::parse_line(string line) {
	if (line[0] == ':') {
		return parse_line_intel(line);
	} else if (line[0] == 'S') {
		return parse_line_motorola(line);
	}
	debug_say("unknown file format.");
	return true;
}

bool ihx::parse_line_motorola(string line) {
	debug_say("Trying to parse \""<<line<<"\".");
	
	// Ignore empty lines
	if (line=="") return false;

	 // Check line length: Must be even and contain at least 4 hex-coded bytes.
	if (line.length()<10 || line.length()%2) return true;
	size_t len = line.length()/2;
	valarray<uint8_t> data(len); // Create a zero-filled string with the expected content size+1
	
	// Line must start with 'S' and digit
	if (line[0] != 'S') return true;
	if (!isdigit(line[1])) return true;
	data[0] = decode_hex(line[1]);
	
	// Try changing hex-coded bytes into values
	for (size_t i=1; i<len; ++i) {
		uint h = decode_hex(line[2*i+0]);
		uint l = decode_hex(line[2*i+1]);
		if (h==NO_HEX || l==NO_HEX) return true;
		data[i] = h*16 + l;
	}
	
	// Check declared length
	if (data[1] != len-2) return true;
	
	// Checksum
	uint8_t cs = 0xff;
	for (size_t i=1; i<len; ++i) cs -= data[i];
	if (cs) return true;
	
	#ifdef DEBUG
	{
		string s="Accepted:";
		for (size_t i=0; i < data.size(); ++i) {
			s += " ";
			s += intToString(data[i],3);
		}
		debug_say(s);
	}	
	#endif
	
	// Check record type
	data_sect ds;
	if (data[0] == 0) {
		// Vendor specific header
		//   Ignored
		if (len<5) return true; // Minimum length check
	} else if (data[0] == 1) {
		// Data sequence, 2-byte address
		if (len<5) return true; // Minimum length check
		ds.address = uint8_t(data[2])*0x100UL + uint8_t(data[3])*0x1 + parse_line_offset;
		ds.data.resize(len-5);
		ds.data    = data[slice(4, len-5, 1)];
	} else if (data[0] == 2) {
		// Data sequence, 3-byte address
		if (len<6) return true; // Minimum length check
		ds.address = uint8_t(data[2])*0x10000UL + uint8_t(data[3])*0x100 + uint8_t(data[4])*0x1 + parse_line_offset;
		ds.data.resize(len-6);
		ds.data    = data[slice(5, len-6, 1)];
	} else if (data[0] == 3) {
		// Data sequence, 4-byte address
		if (len<7) return true; // Minimum length check
		ds.address = uint8_t(data[2])*0x1000000UL + uint8_t(data[3])*0x10000 + uint8_t(data[4])*0x100 + uint8_t(data[5])*0x1 + parse_line_offset;
		ds.data.resize(len-7);
		ds.data    = data[slice(6, len-7, 1)];
	} else if (data[0] == 5) {
		// Record count
		//   Ignored
		if (len<5) return true; // Minimum length check
	} else if (data[0] == 7) {
		// End of block, 4-byte address
		//   Ignored
		if (len<7) return true; // Minimum length check
	} else if (data[0] == 8) {
		// End of block, 3-byte address
		//   Ignored
		if (len<6) return true; // Minimum length check
	} else if (data[0] == 9) {
		// End of block, 2-byte address
		//   Ignored
		if (len<5) return true; // Minimum length check
	} else {
		// Unknown block, error
		return true;
	}
	
	debug_say("Checked record type.");

	// Line contains data
	if (ds.data.size()) {
		// If list contains data
		if (sectors.begin()!=sectors.end()) {
			// If this sector is immediately after the previous one
			data_sect &last = sectors.back();
			if (last.address + last.data.size() == ds.address) {
				// append data to the previous sector
				int os = last.data.size();
				data_t tmp(last.data);
				last.data.resize(last.data.size()+ds.data.size());
				last.data[slice(0,os,1)] = tmp;
				last.data[slice(os,ds.data.size(),1)] = ds.data;
			} else {
				// Address not contiguous: Create a new sector
				sectors.push_back(ds);
			}
		} else {
			// List was empty: Create a new sector
			sectors.push_back(ds);
		}
		#ifdef DEBUG
		{
			string s="Data:";
			for (int i=0; i < ds.data.size(); ++i) {
				s += " ";
				s += intToString(ds.data[i],3);
			}
			debug_say(s);
		}	
		#endif
	}
	
	return false;
}

bool ihx::parse_line_intel(string line) {
	debug_say("Trying to parse \""<<line<<"\".");
	
	// Ignore empty lines
	if (line=="") return false;

	// Check line length: Must be odd and contain at least 4 hex-coded bytes.
	if (line.length()<11 || line.length()%2==0) {
		debug_say("Bad line length.");
		return true;
	}
	size_t len = line.length()/2;
	valarray<uint8_t> data(len); // Create a zero-filled string with the expected content size+1
	
	// Line must start with ':'
	if (line[0] != ':') {
		debug_say("Should start with colon.");
		return true;
	}
	
	// Try changing hex-coded bytes into values
	for (size_t i=0; i<len; ++i) {
		uint h = decode_hex(line[2*i+1]);
		uint l = decode_hex(line[2*i+2]);
		if (h==NO_HEX || l==NO_HEX) {
			debug_say("Not a hex value at "<<(2*i+1)<<" or "<<(2*i+2));
			return true;
		}
		data[i] = h*16 + l;
	}
	
	// Check declared length
	if (data[0] != len-5) {
		debug_say("Length mismatch.");
		return true;
	}
	
	// Checksum
	uint8_t cs = 0;
	for (size_t i=0; i<len; ++i) cs += data[i];
	if (cs) {
		debug_say("Bad checksum.");
		return true;
	}
	
	#ifdef DEBUG
	{
		string s="Accepted:";
		for (int i=0; i < data.size(); ++i) {
			s += " ";
			s += intToString(data[i],3);
		}
		debug_say(s);
	}	
	#endif
	
	// Check record type
	data_sect ds;
	switch(data[3]) {
	case 0: // Data record
		if (len<6) return true; // Too short.
		ds.address = uint8_t(data[2])*0x0001UL + uint8_t(data[1])*0x0100UL + parse_line_offset;
		ds.data.resize(len-5);
		ds.data    = data[slice(4, len-5, 1)];
		break;
		
	case 1: // EOF record
		// Ignored.
		break;
		
	case 4: // Extended Linear Address Record, 2 upper bytes of address
		if (len != 7) return true; // Must hav 2-bytes of data
		if (data[1] || data[2]) return true; // Address must be zero
		parse_line_offset = uint32_t(data[4])*0x01000000UL + uint32_t(data[5])*0x00010000UL;
		debug_say("Offset = 0x"<<hex<<parse_line_offset<<dec);
		break;
		
	default: // Unsupported
		debug_say("Unsuported record type.");
		return true;
	}
	
	// Line contains data
	if (ds.data.size()) {
		// If list contains data
		if (sectors.begin()!=sectors.end()) {
			// If this sector is immediately after the previous one
			data_sect &last = sectors.back();
			if (last.address + last.data.size() == ds.address) {
				// append data to the previous sector
				int os = last.data.size();
				data_t tmp(last.data);
				last.data.resize(last.data.size()+ds.data.size());
				last.data[slice(0,os,1)] = tmp;
				last.data[slice(os,ds.data.size(),1)] = ds.data;
			} else {
				// Address not contiguous: Create a new sector
				sectors.push_back(ds);
			}
		} else {
			// List was empty: Create a new sector
			sectors.push_back(ds);
		}
		#ifdef DEBUG
		{
			string s="Data:";
			for (int i=0; i < ds.data.size(); ++i) {
				s += " ";
				s += intToString(ds.data[i],3);
			}
			debug_say(s);
		}
		#endif
	}
	
	return false;
}

bool ihx::loadFromStream(istream &in) {
	parse_line_offset = 0;
	string line;
	char ch;
	while (in.get(ch)) {
		if (ch=='\n' || ch=='\r') {
			if (parse_line(line)) return (error=true);
			line="";
		} else {
			line += ch;
		}
	}
	if (line.length()) if (parse_line(line)) return (error=true);
	return (error=false);
}

bool ihx::loadFromString(string s) {
	parse_line_offset = 0;
	string line;
	for (size_t i=0; i<s.length(); ++i) {
		if (s[i]=='\n' || s[i]=='\r') {
			if (parse_line(line)) return (error=true);
			line="";
		} else {
			line += s[i];
		}
	}
	if (line.length()) if (parse_line(line)) return (error=true);
	return (error=false);
}

ihx::ihx(string s) : error(true) {
	// Is s a file name or the S-record data?
	// Filenames usually won't have newlines
	for (size_t i=0; i<s.length(); ++i) {
		if (s[i] == '\n') {
			loadFromString(s);
			return;
		}
	}
	loadFromFile(s);
	return;
}

uint32_t ihx::length() {
	uint32_t len = 0;
	for (sector_list::iterator i=sectors.begin(); i!=sectors.end(); ++i) {
		len += i->data.size();
	}
	return len;
}
