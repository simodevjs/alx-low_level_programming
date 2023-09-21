#include "main.h"

int _strlen(const char *str);
int getcharval(const char *s, int idx);
void reverse_str(char *str, int len);

/**
 * infinite_add - add 2 numbers together from two strings
 * @n1: 1st string
 * @n2: 2nd string
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: total
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, w_n1 = _strlen(n1), w_n2 = _strlen(n2), sum, carry;

	if (w_n1 >= size_r || w_n2 >= size_r)
		return (0);

	for (i = 0; i < w_n1 || i < w_n2; i++)
	{
		char cn1 = getcharval(n1, i);
		char cn2 = getcharval(n2, i);

		sum = cn1 + cn2 + carry;
		carry = 0;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		r[i] = sum + 48;
	}

	if (carry)
		r[i++] = carry + 48;
	if (i >= size_r)
		return (0);

	r[i] = '\0';

	reverse_str(r, _strlen(r));

	return (r);
}

/**
 * _strlen - Self explain
 * @str: the string
 * Return: (int) the length
 **/
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * getcharval - Self explain
 * @s: the string
 * @idx: index of char in string
 * Return: (int) value of char in ascii
 **/
int getcharval(const char *s, int idx)
{
	if (idx < _strlen(s))
		return (s[_strlen(s) - idx - 1] - 48);
	return (0);
}

/**
 * reverse_str - Self explain
 * @str: the string
 * @len: lenght of the given string
 **/
void reverse_str(char *str, int len)
{
	int i = 0;

	for (i = 0; i < len / 2; i++)
	{
		char t = str[i];

		str[i] = str[len - i - 1];
		str[len - i - 1] = t;
	}
}
