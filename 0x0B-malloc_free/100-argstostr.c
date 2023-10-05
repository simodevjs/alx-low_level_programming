#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all passed arguments.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to the new string, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	/* for newlines and null-termenator will added to the final string */
	len += (ac + 1);

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
