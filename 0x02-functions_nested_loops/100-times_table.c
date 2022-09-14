#include "main.h"

/**
 * print_times_table - function thatprint the n times table, starting with 0
 * @num:the parameter of the function
 * Return: void
 */

void print_times_table(int num)
{
	int n;
	int t;
	int m;
	if (num < 0 || num > 15)
	{
		return;
	}
	if (num == 0)
	{
		_putchar(48);
		_putchar('\n');
		return;
	}
	for (n =0; n <= num; n++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (t = 1; t <= num; t++)
		{
			m = n * t
			if (t != num)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
