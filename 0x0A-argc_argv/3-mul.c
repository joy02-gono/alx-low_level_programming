#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector of pointers to string
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, j ,k;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
