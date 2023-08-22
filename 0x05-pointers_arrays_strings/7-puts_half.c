#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: character pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int length_of_the_string;
	int n, m; /* length for odd and even */

	while (str[i] != '\0')
	{
		i++;
	}

	length_of_the_string = i;
	m = length_of_the_string / 2;
	n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 != 0)
	{
		while (n < length_of_the_string)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	else if (length_of_the_string % 2 == 0)
	{
		while (m < length_of_the_string)
		{
			_putchar(str[m + 1]);
			m++;
		}
	}

	_putchar('\n');
}
