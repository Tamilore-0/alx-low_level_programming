#include <stdio.h>
/**
 * main - prints all base 16 numbers
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (char a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}

