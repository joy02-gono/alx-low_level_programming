#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c:character to check for
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j); j++)
	{
		if (*(s + j) == c)
			return (s + j);
	}
	if (*(s + j) == c)
		return (s + j);
	return (0);
}
