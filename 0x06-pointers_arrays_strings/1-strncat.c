#include "main.h"

/**
 * _strlen - function that return the length of a string
 * @s: the string
 * Return: length of s
 */

int _strlen(char *s)
{
	int m;

	m = 0;
	while (*(s + m))
		m++;

	return (m);
}

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes that function will use from src
 * Return: a pointer to the resulting destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int ls, ld;

	ld = _strlen(dest);
	ls = _strelen(src) - 1;
	if (n < ls)
		ls = n;

	while (ls >= 0)
	{
		*(dest + ld + ls) = *(src + ls);
		ls--;
	}
	*(dest + _strlen(dest)) = '\0';

	return (dest);
}
