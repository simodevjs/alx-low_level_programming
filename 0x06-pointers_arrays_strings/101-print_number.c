#include "main.h"

/**
 * print_number - prints the given number as parameter
 * @n: the number to print
 **/
void print_number(int n)
{
	unsigned int abs_num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	abs_num = n;

	if (abs_num / 10)
		print_number(abs_num / 10);

	_putchar(abs_num % 10 + '0');
}
