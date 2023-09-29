#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number
 * Return: if n > 0 returns the factorial of n, -1 otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n != 1)
		return (factorial(n - 1) * n);

	return (n);
}
