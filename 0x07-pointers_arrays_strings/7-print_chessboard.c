#include "main.h"

/**
 * print_chessboard - prints the shessboard
 * @a: the 2 demontions array [2D]
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
