#include <NN_gates.h>

int main(void) {
	if (NN_xor(0, 0) != 0) {
		return 1;
	}
	if (NN_xor(1, 0) != 1) {
		return 1;
	}
	if (NN_xor(0, 1) != 1) {
		return 1;
	}
	if (NN_xor(1, 1) != 0) {
		return 1;
	}
	return 0;
}


