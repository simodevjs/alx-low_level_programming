#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: concatenated string which is dest
 */
char *_strcat(char *dest, char *src)
{

	int len = 0, j = 0;

	while (dest[len] != '\0')
		len++;

	for (; src[j] != '\0'; j++, len++)
		dest[len] = src[j];

	dest[len] = '\0';

	return (dest);
}
