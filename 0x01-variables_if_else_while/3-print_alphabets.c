#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHUJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 32; i++)
	{
		putchar(alp[i]);
	}

	putchar('\n');
	return (0);
}
