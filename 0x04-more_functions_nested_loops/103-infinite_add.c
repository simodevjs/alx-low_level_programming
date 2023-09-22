#include "main.h"

/**
 * infinite_add - adds two umbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: buffer size
 * Return:or 0 r
 * owned by: SmoxHAkim
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int u, v, w, x, y, z;

	for (u = 0; n1[u]; u++)
		;
	for (v = 0; n2[v]; v++)
		;
	if (u > size_r || v > size_r)
		return (0);

	y = 0;
	for (u -= 1, v -= 1, w = 0; w < size_r - 1; u--, v--, w++)
	{
		z = y;
		if (u >= 0)
		{
			z += n1[u] - '0';
		}
		if (v >= 0)
		{
			z += n2[v] - '0';
		}
		if (u < 0 && v < 0 && z == 0)
		{
			break;
		}
		y = z / 10;
		r[w] = z % 10 + '0';
	}
	r[w] = '\0';
	if (u >= 0 || v >= 0 || y)
	{
		return (0);
	}
	for (w -= 1, x = 0; x < w; w--, x++)
	{
		y = r[w];
		r[w] = r[x];
		r[x] = y;
	}
	return (r);
}
