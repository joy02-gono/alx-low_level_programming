#include "main.h"

/**
 * sqrt_check - verifying if r is the square root of m
 * @r: parameter
 * @m: number to find the sqrt of
 * Return: -1 or sqrt of m
 */

int sqrt_check(int r, int m)
{
	if (r * r == m)
		return (r);
	if (r * r > m)
		return (-1);
	return (sqrt_check(r + 1, m));
}
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: parameter
 * Return: natural root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(1, n));
}
