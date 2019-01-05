#include <iostream>
#include <cstdint>

typedef union{
	struct {
		uint32_t	b0	:	8;
		uint32_t	b1	:	8;
		uint32_t	b3	:	8;
		uint32_t	b4	:	8;
	};
	struct {
		uint32_t	w0	:	16;
		uint32_t	w1	:	16;
	};
	uint32_t	value;
} data_t;

int main(){
	data_t	d;
	d.value = 6;
	std::cout << "UINT32:" << std::endl;
	std::cout << d.value << std::endl;
	std::cout << "UINT8:" << std::endl;
//	std::cout << d.b0 << std::endl;
//	std::cout << d.b1 << std::endl;
//	std::cout << d.b2 << std::endl;
//	std::cout << d.b3 << std::endl;

};



