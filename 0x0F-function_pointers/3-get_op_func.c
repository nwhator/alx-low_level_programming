#include "3-calc.h"

/**
 * get_op_func - Entry point
 * Description: selects the correct function to perform the
 *               operation asked by the user.
 * @s: operator passed as argument to the program.
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	/* Array of structs holding function pointers */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* Loop through ops array until correct operator is found */
	while (ops[i].op != NULL)
	{
		/* Compare operator strings */
		if (*(ops[i].op) == *s)
		{
			/* Return corresponding function pointer */
			return (ops[i].f);
		}
		i++;
	}
	/* If operator not found */
	return (NULL);
}
