#include "main.h"

/**
 * print_triangle - Self explain
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = i - 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
