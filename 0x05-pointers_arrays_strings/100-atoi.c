#include "main.h"

/**
 * _atoi - array to integers
 * @s: the string
 * Return: return the integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int res = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';

			if (s[i + 1] == ' ')
				break;
		}
	}

	return (sign * res);
}
