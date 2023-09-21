#include "main.h"

/**
 * _strncat - concatenates n bytes from string dest to src
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: the number of bytes to get from src
 * Return: the final result in dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int len = 0, j = 0;

	while (dest[len] != '\0')
		len++;

	while (src[j] != '\0' && j < n)
		dest[len++] = src[j++];

	dest[len] = '\0';

	return (dest);
}
