#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');
	return (0);
}
