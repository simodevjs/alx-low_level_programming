#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(len + 1);

	if (!new_str)
		return (NULL);

	for (; str[i]; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';

	return (new_str);
}
