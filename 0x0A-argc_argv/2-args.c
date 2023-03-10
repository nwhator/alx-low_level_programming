#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all arguments it receives
 * @argc: No of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
