#include <stdio.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: vector arguments
 * Return: 0 if no errors otherwise 1
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
