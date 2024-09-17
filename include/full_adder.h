#ifndef __FULL_ADDER_H__
#define __FULL_ADDER_H__

#include <stdbool.h>
#include <stdint.h>

typedef struct adder_out_t{
	bool out;
	bool carry;
} adder_out_t;

adder_out_t full_adder_1(bool a, bool b, bool carry);
uint8_t full_adder_8(uint8_t a, uint8_t b);
uint16_t full_adder_16(uint16_t a, uint16_t b);
uint32_t full_adder_32(uint32_t a, uint32_t b);
uint64_t full_adder_64(uint64_t a, uint64_t b);

#endif /* end of header guard: __FULL_ADDER_H__ */
