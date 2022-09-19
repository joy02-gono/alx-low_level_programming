#include "main.h"
#include <stdio>

/**
 * print_array - Prints n elements of an array of integers
 * @a:Array of integers
 * @n: Number of the array to be printed
 *
 * Retun: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		print("%d", a[j]);

		if (j != (n - 1))
		{
			print(", ");
		}
	}

	printf("\n");
}
