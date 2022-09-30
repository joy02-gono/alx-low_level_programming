#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; s[j]; j++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
				break;
		}
		if (accept[k])
			return (s + j);
	}
	return (0);
}
