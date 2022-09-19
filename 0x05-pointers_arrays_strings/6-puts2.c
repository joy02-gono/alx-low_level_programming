#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to print
 * Return: void
 */

void put2(char *str)
{
	inti, j;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		i++;
		c = *(str + i);
	}
	j = 0;
	i--;

	while (j <= i)
	{
		_putchar(*(str + j));
		j +=2;
	}
	_putchar('\n');
}
