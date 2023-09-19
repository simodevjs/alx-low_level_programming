#include "main.h"

/**
 * _strlen - length of a given string
 * @s: the string
 * Return: the length of given string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}
