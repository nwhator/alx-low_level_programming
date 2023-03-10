#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the number of arguements passed
 * @argc: No of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
