#include <stdio.h>
/**
 * main - prints lower and uppercase of alphabets
 *Return: 0
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (char A = 'A'; A <= 'Z'; A++)
		putchar(A);

	putchar('\n');

	return (0);
}
