#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: performs simple operations
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op_func;

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Convert num* string to int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Get function for operator */
	op_func = argv[2];

	/* Check if operator is invalid */
	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Call function with num1 and num2 */
	result = get_op_func(op_func)(num1, num2);

	printf("%d\n", result);
	return (0);
}
