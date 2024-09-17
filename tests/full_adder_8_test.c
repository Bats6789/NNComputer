#include "full_adder.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void) {
	uint8_t a, b, sum;

	srand(time(NULL));

	for (size_t i = 0; i < 10; ++i) {
		a = rand() % UINT8_MAX;
		b = rand() % UINT8_MAX;

		sum = full_adder_8(a, b);
		printf("%hhu + %hhu\n", a, b);
		printf("expected: %hhu\nactual: %hhu\n", (uint8_t)a + b, sum);

		if (full_adder_8(a, b) != (uint8_t)((a + b) & 0xFF)) {
			return 1;
		}
	}

	return 0;
}
