#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the args passed to it.
 * @n: Number of args.
 * Return: The sum of all the args.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
