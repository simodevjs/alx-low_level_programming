#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: charachter to be checked
 * Return: 1 if lowercase or  if 0 is not lower
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
