#include "main.h"

/**
 * _print_hexadecimal_upper - prints the hexadecimal of passed in argument
 * @ap: number to find its hexadecimal
 * Return: hexadecimal of number
 */

int _print_hexadecimal_upper(va_list ap)
{
	int hexadecimal;
	char *ptr_hexadecimal;
	int i;

	ptr_hexadecimal = _itoa(va_arg(ap, unsigned int), 16);

	for (i = 0; ptr_hexadecimal[i] != '\0'; i++)
	{
		if (islower[ptr_hexadecimal[i])
			toupper[ptr_hexadecimal[i];
	}

	hexadecimal = print((ptr_hexadecimal == NULL) ? "NULL" : ptr_hexadecimal);

	return (hexadecimal);
}
