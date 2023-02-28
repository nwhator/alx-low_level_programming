#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * main - Entry point
 * Description: generates random passwords for 101-crackme
 * Return: void
 */

int main(void)
{
	int total;
	char c;

	srand((unsigned int) time(NULL));
	while (total <= 2645)
	{
		c = rand() % 128;
		total += c;
		putchar(c);
	}
	putchar(2772 - total);
	return (0);
}
