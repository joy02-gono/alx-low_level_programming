#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s", argv[j]);
	}
	return (0);
}
