#include "main.h"

/**
 * more_numbers - jdnede;
 * print_to_14 - prints numbers [0-14]
 * Return: dzidizdzd
 */
void more_numbers(void)
{
	int m = 0;
	int n;

	for (m = 0; m < 14 ; m++)
	{
		n = 0;

		while (n <= 14)
		{
			if (n > 10)
				_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			n++;
		}
		_putchar('\n');
	}
}
