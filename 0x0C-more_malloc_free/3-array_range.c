#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: the minimum value in the array.
 * @max: the maximum value in the array.
 * Return: pointer to the new array, OR NULL if min > max.
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
