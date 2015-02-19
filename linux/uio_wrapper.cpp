#include "uio_wrapper.h"
#include <cstdio>

#include <iomanip>
#include <iostream>
using namespace std;
#define TAG(str) { cout << "[At " << __LINE__ << " of " << __FILE__ << "] " << str << endl; }

std::string uio_wrapper::getMapProperty(int idmap, const char *prop) {
	char str[256];
	std::sprintf(str, "/sys/class/uio/uio%d/maps/map%d/%s", uio, idmap, prop);
	int fd = ::open(str, O_RDWR);
	if (fd == -1) return "";
	
	read(fd, str, 256);
	::close(fd);
	
	return str;
}

bool uio_wrapper::open(int id) {
	TAG("uio_wrapper::open");
	if (fd != -1) {
		TAG("Fail: fd != -1");
		return false;
	}
	uio = id;
	
	// Open /dev/uio* file
	char str[128];
	sprintf(str, "/dev/uio%d", uio);
	fd = ::open(str, O_RDWR);
	if (fd == -1) {
		TAG("Fail: fd == -1");
		return false;
	}
	
	// Find information about memory regions
	maps.resize(0);
	for (int i=0; true; i++) {
		if (getMapProperty(i, "size") == "") break;
		
		map m;
		m.name    =           getMapProperty(i, "name"   );
		m.address = std::atoi(getMapProperty(i, "address").c_str());
		m.size    = std::atoi(getMapProperty(i, "size"   ).c_str());
		m.offset  = std::atoi(getMapProperty(i, "offset" ).c_str());
		// map memory
		m.data.u8 = (uint8_t *)mmap(
			0, m.size,
			PROT_READ | PROT_WRITE, MAP_SHARED,
			fd, m.address+m.offset
		);
		if (!m.data.u8) {
			TAG("maps[" << i << "].data == 0");
			close();
			return false;
		}
		
		maps.push_back(m);
	};
	
	TAG("Ok.");
	return true;
}

void uio_wrapper::close() {
	if (fd == -1) return;
	
	// Release all memory maps.
	for (std::vector<map>::iterator i=maps.begin(); i!=maps.end(); i++) {
		if (i->data.u8) munmap(i->data.u8, i->size);
		i->data.u8 = 0;
	}
	maps.resize(0);
	
	// Close uio file
	::close(fd);
	fd = -1;
}
