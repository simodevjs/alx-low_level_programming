#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command line arguments
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
