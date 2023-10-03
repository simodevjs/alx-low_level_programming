#include <stdio.h>

/**
 * main - Entry point and prints the number of arguments
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if the program exits successfully, 0 otherwise
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
