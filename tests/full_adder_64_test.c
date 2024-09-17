#include "full_adder.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void) {
	uint64_t a, b, sum;

	srand(time(NULL));

	for (size_t i = 0; i < 10; ++i) {
		a = rand() % UINT64_MAX;
		b = rand() % UINT64_MAX;

		sum = full_adder_64(a, b);
		printf("%lu + %lu\n", a, b);
		printf("expected: %lu\nactual: %lu\n", (uint64_t)a + b, sum);

		if (full_adder_64(a, b) != (uint64_t)(a + b)) {
			return 1;
		}
	}

	return 0;
}

