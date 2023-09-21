#include "main.h"
#include <stdio.h>

/**
 * leet - converts specific characters to 4-3-0-7-1
 * @s: the string to iterate through
 * Return: return the converted string
 **/

char *leet(char *s)
{
	int i = 0, j = 0;
	char leet[] = "aAeEoOtTlL";
	int convert[] = {4, 3, 0, 7, 1};

	for (; s[i]; i++)
	{
		j = 0;
		for (; leet[j]; j++)
			if (s[i] == leet[j])
				s[i] = convert[j / 2] + 48;
	}

	return (s);
}
