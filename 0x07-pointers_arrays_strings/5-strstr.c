#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack or NULL if no match
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j = 0, k = 0;

	while (haystack[j])
	{
		while (needle[k] && (haystack[j] == needle[0]))
		{
			if (haystack[j + k] == needle[k])
				k++;
			else
				break;
		}
		if (needle[k])
		{
			j++;
			k = 0;
		}
		else
		{
			return (haystack + j);
		}
	}
	return (0);
}
