#ifndef CALC_H
#define CALC_H

#include <stdlib.h>

/*
 * Desc: Header file containing all structures and
 *       prototypes used by the 3-main.c program.
 */

/**
 * struct op - Entry point
 * Description: Struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototypes for functions used by main */
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
