#include "main.h"

/**
 * _printf - write output to stdout according to a format
 * @format: specifies format in which output should be in
 * Return: number of characters printed to stdout.
 * Has a negative return value if format is NULL
 */
int _printf(const char *format, ...)
{
	int len;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	len = controller(format, arg);
	va_end(arg);

	return (len);
}
