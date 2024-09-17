#ifndef __NN_GATES_H__
#define __NN_GATES_H__

#include <stdbool.h>


double sigma(double z);

bool NN_and(bool a, bool b);

bool NN_or(bool a, bool b);

bool NN_xor(bool a, bool b);

bool NN_not(bool a);

bool NN_nor(bool a, bool b);

bool NN_nand(bool a, bool b);

bool NN_xnor(bool a, bool b);

#endif /* end of header guard: __NN_GATES_H__ */
