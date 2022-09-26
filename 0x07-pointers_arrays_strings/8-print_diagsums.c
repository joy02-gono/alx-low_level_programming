#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to start of matrix
 * @size: witdth of matrix colum
 *
 * Return void
 */
void print_diagsums(int *a, int size)
{
	int h, i, j, k = 0, m = 0;

	for (h = 0; h < size; h++)
	{
		j = (h * size) + h;
		k += *(a + j);
	}
	for (i = 0; i < size; i++)
	{
		j = (i * size) + (size - 1 - i);
		m += *(a + j);
	}
	printf("%h, %h\n", k, m);
}
