#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Size of the memory to be allocated.
 * Return: pointer to the allocated memory, OR 98 if failed.
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);

	return (mem);
}
