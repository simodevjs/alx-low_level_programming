#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, swap;

	for (; i < n / 2; i++, j--)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
	}
}
