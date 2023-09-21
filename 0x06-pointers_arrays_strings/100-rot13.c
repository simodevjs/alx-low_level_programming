#include "main.h"

/**
 * rot13 - Caesar Cipher
 * @str: the string to encrypt
 * Return: the encrypted string
 **/
char *rot13(char *str)
{
	int i = 0, j;

	char *raw = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i]; i++)
	{
		j = 0;
		for (; raw[j]; j++)
			if (raw[j] == str[i])
			{
				str[i] = r13[j];
				break;
			}
	}
	return (str);
}
