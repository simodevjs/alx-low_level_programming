#include <stdio.h>

/**
 * main - Entry point and prints the program name
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if the program exits successfully, 0 otherwise
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
