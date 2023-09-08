#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * mul -  program that multiplies two positive numbers.
 * @num1: CL input
 * @num2: CL input
 * Return: int
 */
unsigned long int mul(unsigned long int a, unsigned long int b)
{
    return (a * b);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
    unsigned long int result;
    char char1 = argv[1][0];
    char char2 = argv[2][0];

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    if (!isdigit(char1) && !isdigit(char2))
    {
        printf("Error\n");
        exit(98);
    }

     result = mul(atoi(argv[1]), atoi(argv[2]));

     printf("%lu\n", result);
     return (0);
}
