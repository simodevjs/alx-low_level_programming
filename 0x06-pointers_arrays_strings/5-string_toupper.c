#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 * @str: the string
 * Return: uppercase string
 **/
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

	return (str);
}
