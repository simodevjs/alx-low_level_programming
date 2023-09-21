#include "main.h"

/**
 * _strcmp - compares two strings s1 and s2
 * @s1: the first string
 * @s2: the second string
 * Return: difference between the two strings;
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	return (0);
}
