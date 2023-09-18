#include <stdio.h>
/**
 *main - de,de,de
 *
 *Return: endiedied
 */
int main(void)
{
	char ll[] = "0123456789";
	int i;
	int j;

	for (i = 0; i < 9 ; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(ll[i]);
			putchar(ll[j]);

			if (ll[i] != '8')
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
