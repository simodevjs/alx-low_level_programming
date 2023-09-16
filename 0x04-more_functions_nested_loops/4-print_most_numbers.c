#include "main.h"

/**
 * print_most_numbers - prints number [0-9] except 2, 4
 */
void print_most_numbers(void)
{
	const int ZERO_IN_ASCII = 48;
	const int NINE_IN_ASCII = 57;

	int count = ZERO_IN_ASCII;

	while (count <= NINE_IN_ASCII)
	{
		if (count == 50 || count == 52)
			count++;

		_putchar(count);
		count++;
	}

	_putchar('\n');
}
