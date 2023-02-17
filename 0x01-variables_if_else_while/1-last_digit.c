#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 * Description: Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;

	printf("Last digit of %d is ", n);

	if (dig > 5)
	{
		printf("%d and is greater than 5\n", dig);
	}
	else if (dig == 0)
	{
		printf("%d and is 0\n", dig);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", dig);
	}

	return (0);
}
