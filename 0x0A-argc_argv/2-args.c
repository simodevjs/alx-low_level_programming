#include <stdio.h>

/**
 * main - Entry point and prints the arguments
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if the program exits successfully, 0 otherwise
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	while (*argv)
		printf("%s\n", *argv++);

	return (0);
}
