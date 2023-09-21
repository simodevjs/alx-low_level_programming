#include "main.h"

char toUpperCase(char c);
int check_separators(char c);

/**
 * cap_string - Pascal case after seperators
 * @str: the string
 * Return: the captilized string
 **/
char *cap_string(char *str)
{
	int i, j = 0;
	int is_first = 1;

	for (i = 0; str[i]; i++)
	{
		str[j++] = str[i];
		if (check_separators(str[i]))
		{
			is_first = 1;
			continue;
		}
		if (is_first)
		{
			str[i] = toUpperCase(str[i]);
			is_first = 0;
		}
	}
	str[j] = '\0';
	return (str);
}

/**
 * toUpperCase - Self explain
 * @c: the character
 * Return: the upper character
 **/
char toUpperCase(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

/**
 * check_separators - Self explain
 * @c: the character
 * Return: bool, 1 if seperator include, otherwise 0
 **/
int check_separators(char c)
{
	int i = 0;
	char sep[] = ",;.!?\"(){} \t\n";

	for (; sep[i]; i++)
		if (sep[i] == c)
			return (1);

	return (0);
}
