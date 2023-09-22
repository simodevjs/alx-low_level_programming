#include "main.h"

/**
 * print_numbers - prints number [0-9]
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
}
