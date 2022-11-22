#include "main.h"

/**
 * _print_binary - prints the binary of passed in argument
 * @ap: number to find its binary
 * Return: binary of number
 */

int _print_binary(va_list ap)
{
	int binary;
	char *ptr_binary;

	ptr_binary = _itoa(va_arg(ap, unsigned int), 2);
	binary = print((ptr_binary == NULL) ? "NULL" : ptr_binary);

	return (binary);
}
