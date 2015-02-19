#ifndef UIO_WRAPPER_H
#define UIO_WRAPPER_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <cstdlib>
#include <string>
#include <vector>
#include <stdint.h>

class uio_wrapper {
public:
	struct map {
		std::string name;
		uint32_t address;
		uint32_t size;
		uint32_t offset;
		union {
			uint8_t  *u8;
			uint16_t *u16;
			uint32_t *u32;
		} data;
	};
	
	int fd;
//private:
	int uio;
	std::vector<map> maps;
	
	std::string getMapProperty(int idmap, const char *prop);
	
public:
	
	bool open(int id);
	
	void close();
	
	operator bool() const {
		return fd != -1;
	}
	
	map &operator[] (unsigned id) {
		if (id >= maps.size()) {
			static map m;
			m.address = 0;
			m.data.u8 = 0;
			m.offset = 0;
			m.size = 0;
			return m;
		}
		return maps[id];
	}

	uio_wrapper() : fd(-1) {
		// Nothing to be done
	};
	
	~uio_wrapper() {
		close();
	}
};

#endif
