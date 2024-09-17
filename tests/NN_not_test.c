#include <NN_gates.h>

int main(void) {
	if (NN_not(0) != 1) {
		return 1;
	}
	if (NN_not(1) != 0) {
		return 1;
	}
	return 0;
}


