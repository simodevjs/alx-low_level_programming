#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - keygen for valid password of 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 *🔰 some tools for decompile: dogbolt.org, ghidra, cutter...
	 *🔰 after decompile 101-crackme
	 *🔰 found: if (lVar2 == 0xad4) puts("\a\a\aTada! Congrats");
	 *🔰 0xad4 (hex) => 2772 (dec)
	 *🔰 so, we need to generate sum of chars = 2772 to bybass
	 */

	/* reserve 50 its enough to achieve 2772 with alphabets */
	char str[50];
	int i, randNum = 0, sum = 0;

	/* set seed to current time */
	srand(time(0));

	for (i = 0; sum <= (2772 - 128); i++)
	{
		/* generate upper alphabets (in ascii 65->90) */
		randNum = (rand() % 25) + 65;

		str[i] = randNum;
		sum = sum + randNum;
	}

	/* add last char who achieve 2772 */
	str[i++] = 2772 - sum;
	/* finish string with null-terminated */
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}
