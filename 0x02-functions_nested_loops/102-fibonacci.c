#include <stdio.h>
/**
 * main - entry point
 * description - print the first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{

	int i, n = 50;

	/* initialize first and second sequence */
	long int s1 = 1, s2 = 2;
	long int nextSeq = s1 + s2;

	printf("%ld, %ld, ", s1, s2);

	/* print 3rd to nth sequences */
	for (i = 3; i <= n; ++i)
	{
		printf("%ld", nextSeq);
		s1 = s2;
		s2 = nextSeq;
		nextSeq = s1 + s2;
		if (i < n)
			printf(", ");
	}

	printf("\n");

	return (0);
}
