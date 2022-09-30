#include "main.h"

/**
 * _strncat - concatenates two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[k + j] = src[j];
	}
	dest[k + j] = '\0';

	return (dest);

}
