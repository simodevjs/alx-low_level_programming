#include "main.h"

/**
 * is_prime_number_helper - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : (0));
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - check an integer is it prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
