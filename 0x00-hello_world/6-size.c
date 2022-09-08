#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %u 8 byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
