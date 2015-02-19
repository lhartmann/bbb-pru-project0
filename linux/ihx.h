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
#ifndef IHX_H
#define IHX_H

#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <valarray>
#include <stdint.h>

class ihx {
	public:
	typedef std::valarray<uint8_t> data_t;
	struct data_sect {
		uint32_t address;
		data_t data;
		
		data_sect() : address(0) {}
	};
	typedef std::list<data_sect> sector_list;
	typedef sector_list::const_iterator iterator;
	typedef sector_list::const_reverse_iterator reverse_iterator;
	
	private:
	bool error;
	sector_list sectors;
	
	static uint decode_hex(char ch); // changes an ascii hex char into its value.
	
	uint32_t parse_line_offset;
	bool parse_line_intel(std::string line);
	bool parse_line_motorola(std::string line);
	bool parse_line(std::string line);
	
	public:
	uint32_t count() const { return sectors.size(); }
	uint32_t length(); // Total bytes in the sectors
	bool loadFromStream(std::istream &in);
	bool loadFromString(std::string s);
	bool loadFromFile(std::string fname) {
		std::ifstream in(fname.c_str(), std::ios::in);
		if (!in) return true;
		return loadFromStream(in);
	}	
	
	ihx() : error(true) {}
	ihx(std::istream &in) : error(true) { loadFromStream(in); };
	ihx(std::string s);
	
	iterator         begin()  const { return sectors.begin();  }
	iterator         end()    const { return sectors.end();    }
	reverse_iterator rbegin() const { return sectors.rbegin(); }
	reverse_iterator rend()   const { return sectors.rend();   }
	
	operator bool() const { return !error; }
};

#endif
