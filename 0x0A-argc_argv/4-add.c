#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Checks if a string contain a valid integer
 * @s: the string to check
 * Return: 1 if the string is a valid integer, 0 otherwise
 */
int is_number(char *s)
{
	int i = 0;

	if (s[i] == '-')
		i++;

	for (; s[i]; i++)
		if (!isdigit(s[i]))
			return (0);

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	for (; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
