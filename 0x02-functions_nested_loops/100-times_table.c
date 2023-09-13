#include "main.h"
/**
 * print_times_table - self explian
 * @t: int times table
 */

void print_times_table(int t)
{
	int num, pos, result;

	if (t < 0 || t > 15)
	{
		return;
	}

	for (num = 0; num <= t; num++)
	{
		_putchar('0');
		for (pos = 1; pos <= t; pos++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * pos;
			if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result <= 99)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				/* Get second digit */
				_putchar(((result / 10) % 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
