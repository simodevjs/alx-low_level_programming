#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and call func on each element.
 * @array: the array to iterate through.
 * @size: the size of the array.
 * @action: the action to perform on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
