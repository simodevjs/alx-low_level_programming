#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line.
 * alphabet a - z
 */
void print_alphabet_x10(void)
{
	int alph;
	int a;

	for (a = 1; a <= 10 ; a++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
