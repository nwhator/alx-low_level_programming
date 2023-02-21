#include <stdio.h>

/**
 * main - Entry Point
 * Description - Print _putchar
 * Return: 0
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}

	return (0);
}
