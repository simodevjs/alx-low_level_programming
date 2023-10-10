#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array by using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}
