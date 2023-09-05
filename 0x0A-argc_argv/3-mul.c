#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", (a * b));
	}
	return (0);
}
