#include <NN_gates.h>

int main(void) {
	if (NN_nor(0, 0) != 1) {
		return 1;
	}
	if (NN_nor(1, 0) != 0) {
		return 1;
	}
	if (NN_nor(0, 1) != 0) {
		return 1;
	}
	if (NN_nor(1, 1) != 0) {
		return 1;
	}
	return 0;
}

