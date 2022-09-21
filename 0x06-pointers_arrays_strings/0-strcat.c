#include "main.h"

/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * #src: source array to concat
 *
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[k + j] = src[j];
	}
	dest[k + j] = '\0';

	return (dest);

}
