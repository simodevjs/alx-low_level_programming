#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints int's, separated by a separator.
 * @separator: the separator to be used between numbers.
 * @n: the number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
