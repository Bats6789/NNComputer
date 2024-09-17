#include <NN_gates.h>

int main(void) {
	if (NN_xnor(0, 0) != 1) {
		return 1;
	}
	if (NN_xnor(1, 0) != 0) {
		return 1;
	}
	if (NN_xnor(0, 1) != 0) {
		return 1;
	}
	if (NN_xnor(1, 1) != 1) {
		return 1;
	}
	return 0;
}


