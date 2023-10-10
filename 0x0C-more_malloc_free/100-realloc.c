#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area.
 * @dest: memory area to copy to.
 * @src: memory area to copy from.
 * @n: bytes of memory.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _realloc - reallocate memory for a given pointer.
 * @ptr: pointer to the memory block to be reallocated.
 * @old_size: size of the old memory block.
 * @new_size: size of the new memory block.
 * Return: pointer to the new memory block, OR NULL if fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_arr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		new_arr = malloc(new_size);
		if (!new_arr)
			return (NULL);
		return (new_arr);
	}

	new_arr = malloc(new_size);
	if (!new_arr)
		return (NULL);

	if (new_size < old_size)
		_memcpy(new_arr, ptr, new_size);
	if (new_size > old_size)
		_memcpy(new_arr, ptr, old_size);

	free(ptr);
	return (new_arr);
}
