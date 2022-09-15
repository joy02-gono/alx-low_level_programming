#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size parameter of a triangle
 * Return: returns nothing
 */
void  print_trianlge(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
