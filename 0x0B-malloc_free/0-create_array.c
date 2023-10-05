#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array to be allocated
 * @c: character to initialize the array with
 * Return: pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(sizeof(char) * size);

	if (!arr || !size)
		return (NULL);

	while (i < size)
		arr[i++] = c;

	return (arr);
}
