#include "full_adder.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void) {
	uint16_t a, b, sum;

	srand(time(NULL));

	for (size_t i = 0; i < 10; ++i) {
		a = rand() % UINT16_MAX;
		b = rand() % UINT16_MAX;

		sum = full_adder_16(a, b);
		printf("%hu + %hu\n", a, b);
		printf("expected: %hu\nactual: %hu\n", (uint16_t)a + b, sum);

		if (full_adder_16(a, b) != (uint16_t)((a + b) & 0xFFFF)) {
			return 1;
		}
	}

	return 0;
}

