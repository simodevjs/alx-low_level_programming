#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 * -1 if the number is less than zero.
 * 0 if the number is zero,
 */

int print_sign(int n)
{

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
