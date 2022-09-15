#include "main.h"

/**
 * _isupper - function that check for uppercase character
 * @c: the character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
