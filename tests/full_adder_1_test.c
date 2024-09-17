#include "full_adder.h"
#include <stdbool.h>
#include <stdio.h>

bool test(bool a, bool b, bool c, adder_out_t expected) {
	adder_out_t actual = full_adder_1(a, b, c);

	printf("expected: (%d, %d)\nactual: (%d, %d)\n",
		expected.out, expected.carry,
		actual.out, actual.carry);
	return actual.out != expected.out || actual.carry != expected.carry;
}

int main(void) {
	if (test(0, 0, 0, (adder_out_t){0, 0})) {
		return 1;
	}
	if (test(1, 0, 0, (adder_out_t){1, 0})) {
		return 1;
	}
	if (test(0, 1, 0, (adder_out_t){1, 0})) {
		return 1;
	}
	if (test(1, 1, 0, (adder_out_t){0, 1})) {
		return 1;
	}
	if (test(0, 0, 1, (adder_out_t){1, 0})) {
		return 1;
	}
	if (test(1, 0, 1, (adder_out_t){0, 1})) {
		return 1;
	}
	if (test(0, 1, 1, (adder_out_t){0, 1})) {
		return 1;
	}
	if (test(1, 1, 1, (adder_out_t){1, 1})) {
		return 1;
	}
	return 0;
}
