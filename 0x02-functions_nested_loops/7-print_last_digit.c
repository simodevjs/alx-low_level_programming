#include "main.h"

/**
 * print_last_digit - last digit of a number.
 *
 * @n: takes number input
 *
 * Return: efed semry
*/
int print_last_digit(int n)
{
	int e;

	if (n < 0)
	{
		e = -1 * (n % 10);
	}
	else
	{
		e = n % 10;
	}
	_putchar(e + '0');
	return (e);
}
