#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL in the case of error,
 * pointer to allocated space
 */

char *_strup(char *str)
{
	char *cpy;
	int index, lrn;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
