#include <math.h>
#include <stdbool.h>

inline double sigma(double z) {
	return 1 / (1 + exp(-z));
}

bool NN_and(bool a, bool b) {
	double w0 = -30.0;
	double w1 = 20.0;
	double w2 = 20.0;

	return sigma(w0 + w1 * a + w2 * b) > 0.5;
}

bool NN_or(bool a, bool b) {
	double w0 = -10.0;
	double w1 = 20.0;
	double w2 = 20.0;

	return sigma(w0 + w1 * a + w2 * b) > 0.5;
}

bool NN_xor(bool a, bool b) {
	double w00 = 10.11059207;
	double w01 = 10.11158539;
	double w10 = 4.17780472;
	double w11 = 4.17802706;
	double w20 = 11.60987662;
	double w21 = -13.17295793;

	double b0 = -6.79369076;
	double b1 = -6.26845109;
	double b2 = -4.75372044;

	double a0 = sigma(b0 + w00 * a + w01 * b);
	double a1 = sigma(b1 + w10 * a + w11 * b);

	return sigma(b2 + w20 * a0 + w21 * a1) > 0.5;
}

bool NN_not(bool a) {
	double w0 = 10.0;
	double w1 = -20.0;

	return sigma(w0 + w1 * a) > 0.5;
}

bool NN_nor(bool a, bool b) {
	return NN_not(NN_or(a, b));
}

bool NN_nand(bool a, bool b) {
	return NN_not(NN_and(a, b));
}

bool NN_xnor(bool a, bool b) {
	return NN_not(NN_xor(a, b));
}
