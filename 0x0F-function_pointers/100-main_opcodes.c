#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first n bytes of its own code.
 * @argc: number of arguments passed to program.
 * @argv: array of arguments passed to program.
 * Return: 0 on success, 1 or 2 on error.
 */
int main(int argc, char **argv)
{
	int i = 0, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (; i < n; i++)
	{
		printf("%02hhx", arr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
