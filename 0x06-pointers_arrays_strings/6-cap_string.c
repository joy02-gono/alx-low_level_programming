#include "main.h"

/**
 * _indexOf - returns boolean if special character
 * @a: character to return
 * Return: true or false
 */

int _indexOf(char a)
{
	int j;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ''', '!', '?', '(', ')', '{', '}'};

	for (j = 0; j < 13; j++)
	{
		if (capArr[j] == a)
			return (10);
	}
	return (0);
}
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (_indexOf(s[j]))
			continue;
		if (s[j] >= 'a' && s[j] <= 'z' && (_indexOf(s[j - 1]) || j == 0))
			s[j] = s[j] - 32;

	}
	return (s);
}
