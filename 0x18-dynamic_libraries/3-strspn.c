#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; s[j]; j++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
				break;
		}
		if (!accept[k])
			break;
	}
	return (j);
}
