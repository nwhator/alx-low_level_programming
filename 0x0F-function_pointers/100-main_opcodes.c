#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *address;

	/* check for correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* convert argument to integer */
	num_bytes = atoi(argv[1]);

	/* check for negative number of bytes */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* cast main function address to char pointer */
	address = (char *)main;

	/* print the opcodes */
	for (i = 0; i < num_bytes; i++)
	{
		/* convert opcode to two-digit hex string */
		printf("%02hhx%c", address[i], i < num_bytes - 1 ? ' ' : '\n');
	}
	return (0);
}
