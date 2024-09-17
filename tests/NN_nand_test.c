#include <NN_gates.h>

int main(void) {
	if (NN_nand(0, 0) != 1) {
		return 1;
	}
	if (NN_nand(1, 0) != 1) {
		return 1;
	}
	if (NN_nand(0, 1) != 1) {
		return 1;
	}
	if (NN_nand(1, 1) != 0) {
		return 1;
	}
	return 0;
}
