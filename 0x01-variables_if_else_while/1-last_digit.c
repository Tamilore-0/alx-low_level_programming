#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - generates random number and prints value
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int last_night = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("and is less than and not 0\n");

	return (0);
}
