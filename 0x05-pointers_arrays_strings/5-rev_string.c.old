#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the given string
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		/* temp variable use to temporary hold the string */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
