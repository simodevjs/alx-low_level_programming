#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i]; i++)
	{
		for (; needle[j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}
