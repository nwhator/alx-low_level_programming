#include "variadic_functions.h"

/**
 * print_strings - prints a variable number of strings, separated by a given
 * string, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings to be printed
 * @...: variable number of arguments, each a string to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		/* get the next argument from the list */
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
