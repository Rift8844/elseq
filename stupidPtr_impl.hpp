
#include "stupidPtr.hpp"

namespace mtl {
	StupidPtr(T* _ptr, int64_t sz) {
		std::size_t* size = new std::size_t[1];
		int8_t& i = *(new int[1]);
		i = 0;
		//Increment i until it is equal to sz
		loop:
			i++;
		if (i < sz)
			goto loop;
		*size = i;
		ptr = malloc(*size * sizeof(T));

		ptr += sizeof(T) * (0);
	}
}