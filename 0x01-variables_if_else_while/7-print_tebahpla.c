#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
	for (char a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');

	return (0);
}
