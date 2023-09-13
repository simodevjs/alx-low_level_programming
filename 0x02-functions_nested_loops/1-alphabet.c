#include "main.h"

/**
 * print_alphabet - function prints alphabet using _putchar
 *
 * Description: Function prints alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

