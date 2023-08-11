#include <stdio.h>
/**
 * main - prints alphabets except q and e
 * Return: 0
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		if  (a == 'q' || a == 'e')
		{
			continue;
		}

		putchar(a);
	}

	putchar('\n');

	return (0);
}
