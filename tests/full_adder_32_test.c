#include "full_adder.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void) {
	uint32_t a, b, sum;

	srand(time(NULL));

	for (size_t i = 0; i < 10; ++i) {
		a = rand() % UINT32_MAX;
		b = rand() % UINT32_MAX;

		sum = full_adder_32(a, b);
		printf("%u + %u\n", a, b);
		printf("expected: %u\nactual: %u\n", (uint32_t)a + b, sum);

		if (full_adder_32(a, b) != (uint32_t)((a + b) & 0xFFFFFFFF)) {
			return 1;
		}
	}

	return 0;
}

