#include "main.h"

/**
 * _print_hexadecimal_lower - prints the hexadecimal of passed in argument
 * @ap: number to find its hexadecimal
 * Return: hexadecimal of number
 */

int _print_hexadecimal_lower(va_list ap)
{
	int hexadecimal;
	char *ptr_hexadecimal;

	ptr_hexadecimal = _itoa(va_arg(ap, unsigned int), 16);
	hexadecimal = print((ptr_binary == NULL) ? "NULL" : ptr_hexadecimal);

	return (hexadecimal);
}
