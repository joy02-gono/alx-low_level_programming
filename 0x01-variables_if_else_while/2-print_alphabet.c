#include <stdio.h>

/**
 * main- lowercase alphabets
 *
 * Description: this program prints lowercase alphabet using main function
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
