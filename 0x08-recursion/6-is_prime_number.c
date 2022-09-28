#include "main.h"

/**
 * prime_check - verifying if r is the prime number of m
 * @r: parameter
 * @m: number to check if its a prime number
 * Return: 1 or 0
 */

int prime_check(int r, int m)
{
	if (r * r > m)
		return (1);
	if (m % r == 0)
		return (0);
	return (prime_check(r + 1, m));
}
/**
 * is_prime_number - function that checks if n is a prime number
 * @n: parameter
 * Return: 1 if n is prime number or otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
