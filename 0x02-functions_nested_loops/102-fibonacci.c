#include <stdio.h>

/**
 * main - Entry point
 * Description - Fibonacci Numbers (50)
 * Return: 0
 */

int main(void)
{
	int i, n1, n2, n3;
	
	i = 2;
	n1 = 1;
	n2 = 2;

	printf("%d, %d, ", n1, n2);
	while (i < 50)
	{
		n3 = n1 + n2;
		if ( n3 < 0)
		{
			break;
		}
		printf("%d, ", n3);
		i++;
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
