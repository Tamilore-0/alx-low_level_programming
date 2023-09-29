#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	// If the first byte of the integer contains the least significant byte,
	// return 1 (little-endian); otherwise, return 0 (big-endian).
	return (*byte);
}
