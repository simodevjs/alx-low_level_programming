#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the number of words from string
 * @str: the given string
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i = 0, count = 0;
	int end_of_word = 0, end_of_string = 0;

	for (; str[i]; i++)
	{
		end_of_word = (str[i] != ' ' && str[i + 1] == ' ');
		end_of_string = (str[i] != ' ' && str[i + 1] == '\0');

		if (end_of_word || end_of_string)
			count++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, l, words;
	char **p;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	p = malloc(sizeof(char *) * (words + 1));
	if (p == NULL)
		return (NULL);

	p[words] = NULL;
	for (i = 0, k = 0; k < words; k++)
	{
		for (; str[i] == ' '; i++)
			;
		for (j = i; str[j] != ' ' && str[j]; j++)
			;
		p[k] = malloc(j - i + 1);
		if (p[k] == NULL)
		{
			for (l = 0; l < k; l++)
				free(p[l]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < j - i; l++)
			p[k][l] = str[i + l];

		p[k][l] = '\0';
		i = j;
	}
	return (p);
}
