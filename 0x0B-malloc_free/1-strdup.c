#include <stdlib.h>
#include "main.h"

/**
 * _strdup -   returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string input
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *) malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
}
