#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Description: this program prints possible combinations of single numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			 putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
