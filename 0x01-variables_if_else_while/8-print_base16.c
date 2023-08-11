#include <stdio.h>
/**
 * main - prints all base 16 numbers
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	char a;

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}

