#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	inti, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
