#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all elements of an array of integers
 * @a: the array
 * @n: the length of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* if i last item print w/o comma and space */
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
