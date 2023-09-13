#include <stdio.h>
/**
 * main - entry point
 * description - print the sum of the even value in the range 4e6
 * Return: Always 0 (success)
 */

int main(void)
{
	/* initialize first and second sequence */
	long int s1 = 1, s2 = 2;
	long int nextSeq = s1 + s2;
	long int sum = 2;

	while (nextSeq <= 4e6)
	{
		if (nextSeq % 2 == 0)
			sum += nextSeq;
		s1 = s2;
		s2 = nextSeq;
		nextSeq = s1 + s2;
	}

	printf("%ld\n", sum);

	return (0);
}
