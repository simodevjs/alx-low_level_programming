#include <stdio.h>
#include <stdlib.h>

/**
 * main - Minimum num of coins to make change for an amount of money
 * @argc: The number of command-line arguments
 * @argv: the array of arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 0, cents = 0, coins = 0;
	int values[] = {25, 10, 5, 2, 1};
	int size = sizeof(values) / sizeof(values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < size; i++)
	{
		coins += cents / values[i];
		cents %= values[i];

		if (cents == 0)
			break;
	}

	printf("%d\n", coins);
	return (0);
}
