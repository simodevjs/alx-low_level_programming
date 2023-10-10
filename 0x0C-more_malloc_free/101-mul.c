#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * is_number - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if ((s[i] < '0' && s[i] > '9'))
			return (0);

	return (1);
}

/**
 * main - entry point
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	/*int *result = NULL;*/
	int len1 = 0, len2 = 0, checker = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(is_number(argv[1]) && is_number(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	(void)(len1);
	(void)(len2);
	(void)(checker);
	/* in progress */

	return (0);
}
