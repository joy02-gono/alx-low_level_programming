#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: the string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palcheck - returns true if the given string is a palindrome
 * @m: the string to be checked
 * @n: the length of s
 * @s: string
 * Return: 1 or 0
 */
int palcheck(int m, int n, char *s)
{
	if (m >= n)
		return (1);
	if (*(s + m) != *(s + n - m))
		return (0);
	return (palcheck(m + 1, n, s));
}
/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string
 * Return: 1 if s is palindrome or otherwise 0
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (palcheck(0, i - 1, s));
}
