#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A binary string
 *
 * Return: the converted number, or 0 if there is one
 * or more chars in the string
 * b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!*b)
		return (0);


	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
		{
			value |= 1;
		}
		b++;
	}

	return (value);
}
