#include "2-strchr.c"
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)

		if (_strchr(accept, *s))
			return (s);

		else
			s++;

	return (NULL);
}
