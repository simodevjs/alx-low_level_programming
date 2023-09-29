#include "main.h"

/**
 * get_sqrt_root - get the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @guess: sqaure root
 * Return: the resulting square root
 */
int get_sqrt_root(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);

	return (get_sqrt_root(n, guess + 1));
}

/**
 * _sqrt_recursion - natural square root of a number (recursively)
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_sqrt_root(n, 0));
}
