#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings separated by a separator.
 * @separator: the string to be used as a separator.
 * @n: the number of strings passed in.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str = NULL;

	va_start(args, n);

	for (; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
