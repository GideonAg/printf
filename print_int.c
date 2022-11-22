#include "main.h"

/**
 * print_int - Writes a number base 10 to stdout.
 *
 * @ap: va_list whose next yield is an int.
 * Return: Number of characters written.
 */
int print_int(va_list ap)
{
	int nchars, n;
	char *s;

	n = va_arg(ap, int);
	s = _itoa(n, 10);

	if (s == NULL)
		nchars = print("(null)");
	else
		nchars = print(s);

	return (nchars);
}
