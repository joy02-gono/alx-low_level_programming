#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Description: this program prints all single numbers of base 10 from 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

