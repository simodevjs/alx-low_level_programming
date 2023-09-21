#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] && i < n; i++)
		dest[i] = src[i];

	for (; dest[i] && i < n; i++)
		dest[i] = '\0';

	return (dest);
}
