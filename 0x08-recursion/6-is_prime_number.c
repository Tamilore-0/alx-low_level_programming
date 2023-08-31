#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: Inout integer
 * Return: 1 if it is prime, otherwise return 0
 */
int prime_support(int num, int val)
{
	if (val * val > num)
		return (1);
	else if (num % val == 0)
		return (0);
	else
		return (prime_support(num, val + 1));
}

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (prime_support(n, 2));
	}
}

