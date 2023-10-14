#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search through
 * @size: the size of the array
 * @cmp: a pointer to a function that takes an int and returns an int
 * Return: the index of the first element for which cmp returns true,
 * OR -1 if no such element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
