#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * Description: Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		/* If separator provided and is not the last argument, print */
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(args);
}
