#include <stdio.h>

/**
 * main - entry point
 * description - calculate and print the running sum of all multipliers
 * of 3 and 5 starting from zero to 1024 excluded
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum = 0, i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
