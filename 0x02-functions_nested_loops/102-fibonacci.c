#include <stdio.h>

/**
 * main - Entry point
 * Description - Fibonacci Numbers (50)
 * Return: 0
 */

int main(void)
{
	int i, n1, n2, n3;

	n1 = 1;
	n2 = 2;

	for (i = 0; i <= 50; i++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		if (i < 50)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
