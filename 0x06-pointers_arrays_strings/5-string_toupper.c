#include "main.h"

/**
 * string_toupper -uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;

	return (s);
}

