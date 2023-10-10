#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings up to n bytes of s2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to concatenate.
 * Return: pointer to the concatenated string, OR NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str = NULL;
	unsigned int len_s1 = 0, len_s2 = 0, i;

	(s1 == NULL) && (s1 = "");
	(s2 == NULL) && (s2 = "");

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	new_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];

	for (i = 0; i < n; i++)
		new_str[len_s1 + i] = s2[i];

	new_str[len_s1 + n] = '\0';

	return (new_str);
}

/**
 * _strlen - length of a given string
 * @s: the string
 * Return: the length of given string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
