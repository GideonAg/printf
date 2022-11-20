#include "main.h"

/**
 * print_char - Writes a byte to stdout.
 *
 * @ap: va_list which yields a character.
 * Return: 1 since it writes only a byte.
 */
int print_char(va_list ap)
{
	int c = va_arg(ap, int);

	return (_putchar(c));
}
