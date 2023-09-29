#include "main.h"

int _strlen(const char *s);
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if given string a palindrome
 * @s: the string given
 * Return: 1 if it is, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - helper func for the is_palindrome func
 * @s: the given string
 * @start: beginning char of s
 * @end: last char of s
 * Return: returns 1 if s is palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen - Self explain
 * @s: the string
 * Return: (int) the length
 **/
int _strlen(const char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen(s + 1));
}
