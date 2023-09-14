#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all the arguments that are passed to it in any format
 * @format: format of the argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, val = 0;
	va_list args;
	char *string;
	char c_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (c_args[j])
		{
			if (format[i] == c_args[j] && val)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), val = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), val = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), val = 1;
				break;
			case 's':
				string = va_arg(args, char *), val = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	} va_end(args), printf("\n");
}
