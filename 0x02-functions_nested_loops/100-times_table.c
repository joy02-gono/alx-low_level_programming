#include "main.h"

/**
 * number - function that print number
 * @i: number to print the times table
 * Return: void
 */

void number(int i)
{
	if (i / 100 != 0)
	{
		_putchar(i / 100 + '0');
		_putchar(((i % 100) / 10) + '0');
	}
	else
	{
		_putchar(' ');
		if (i / 10 == 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(i / 10 + '0');
		}
	}
	_putchar(i % 10 + '0');
}
