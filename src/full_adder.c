#include "full_adder.h"
#include "NN_gates.h"
#include <stdint.h>

adder_out_t full_adder_1(bool a, bool b, bool carry) {
	adder_out_t result = {0, 0};
	bool A_xor_B = NN_xor(a, b);

	result.out = NN_xor(carry, A_xor_B);
	result.carry = NN_or(NN_and(A_xor_B, carry), NN_and(a, b));

	return result;
}

uint8_t full_adder_8(uint8_t a, uint8_t b) {
	bool carry = 0;
	bool a_prime, b_prime;
	adder_out_t result;
	uint8_t test_bit;
	uint8_t sum = 0;

	for (int i = 0; i < 8; ++i) {
		test_bit = 1 << i;
		a_prime = (a & test_bit) == test_bit;
		b_prime = (b & test_bit) == test_bit;
		result = full_adder_1(a_prime, b_prime, carry);

		carry = result.carry;

		sum |= result.out << i;
	}

	return sum;
}

uint16_t full_adder_16(uint16_t a, uint16_t b) {
	bool carry = 0;
	bool a_prime, b_prime;
	adder_out_t result;
	uint16_t test_bit;
	uint16_t sum = 0;

	for (int i = 0; i < 16; ++i) {
		test_bit = 1 << i;
		a_prime = (a & test_bit) == test_bit;
		b_prime = (b & test_bit) == test_bit;
		result = full_adder_1(a_prime, b_prime, carry);

		carry = result.carry;

		sum |= result.out << i;
	}

	return sum;
}

uint32_t full_adder_32(uint32_t a, uint32_t b) {
	bool carry = 0;
	bool a_prime, b_prime;
	adder_out_t result;
	uint32_t test_bit;
	uint32_t sum = 0;

	for (int i = 0; i < 32; ++i) {
		test_bit = 1 << i;
		a_prime = (a & test_bit) == test_bit;
		b_prime = (b & test_bit) == test_bit;
		result = full_adder_1(a_prime, b_prime, carry);

		carry = result.carry;

		sum |= result.out << i;
	}

	return sum;
}

uint64_t full_adder_64(uint64_t a, uint64_t b) {
	bool carry = 0;
	bool a_prime, b_prime;
	adder_out_t result;
	uint64_t test_bit;
	uint64_t sum = 0;

	for (int i = 0; i < 64; ++i) {
		test_bit = (uint64_t)1 << i;
		a_prime = (a & test_bit) == test_bit;
		b_prime = (b & test_bit) == test_bit;
		result = full_adder_1(a_prime, b_prime, carry);

		carry = result.carry;

		sum |= (uint64_t)result.out << i;
	}

	return sum;
}
