#include "main.h"

/**
 * print_string - Writes an array of bytes to stdout.
 *
 * @ap: va_list whose next yield is a char*.
 * Return: Number of bytes written.
 */
int print_string(va_list ap)
{
	int nchars;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		nchars = print("(null)");
	else
		nchars = print(s);

	return (nchars);
}
