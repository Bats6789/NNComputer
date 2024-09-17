#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "NN_gates.h"
#include "full_adder.h"
#include <limits.h>
#include <time.h>

void print_test(const char *f_name, bool (*f)(bool, bool));
void print_not_test(void);
void print_full_adder_test(void);

int main(int argc, char **argv) {
	uint64_t a;
	uint64_t b;
	uint64_t sum;

	srand(time(NULL));

	for (int i = 0; i < 10; ++i) {
		a = rand() % UINT8_MAX;
		b = rand() % UINT8_MAX;

		sum = full_adder_64(a, b);

		printf("%lu + %lu = %lu\n", a, b, sum);
	}
	return 0;
}

void print_test(const char *f_name, bool (*f)(bool, bool)) {
	bool a;
	bool b;

	for (int i = 0; i < 4; ++i) {
		a = (i & 0x1) == 0x1;
		b = (i & 0x2) == 0x2;
		printf("%s(%d, %d) = %d\n", f_name, a, b, f(a, b));
	}
}

void print_not_test(void) {
	printf("NN_not(0) = %d\n", NN_not(0));
	printf("NN_not(1) = %d\n", NN_not(1));
}

void print_full_adder_test(void) {
	adder_out_t result = full_adder_1(0, 0, 0);
	printf("full_adder_1(0, 0, 0) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(1, 0, 0);
	printf("full_adder_1(1, 0, 0) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(0, 1, 0);
	printf("full_adder_1(0, 1, 0) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(1, 1, 0);
	printf("full_adder_1(1, 1, 0) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(0, 0, 1);
	printf("full_adder_1(0, 0, 1) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(1, 0, 1);
	printf("full_adder_1(1, 0, 1) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(0, 1, 1);
	printf("full_adder_1(0, 1, 1) = {%d, %d}\n", result.out, result.carry);

	result = full_adder_1(1, 1, 1);
	printf("full_adder_1(1, 1, 1) = {%d, %d}\n", result.out, result.carry);
}
