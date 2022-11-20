#include "main.h"

/**
 * directive_controller - Delegates format directives to handler functions.
 *
 * @ap: va_list of format parameters.
 * @ch: char immediately after %.
 * Return: Number of bytes written to stdout.
 */
int directive_controller(va_list ap, int ch)
{
	int p, nhandlers;
	format handlers[] = {
		{'s', print_string},
		{'c', print_char},
	};

	if (ch == '\0')
		return (-1);

	if (ch == '%')
	{
		_putchar(ch);
		return (1);
	}

	nhandlers = sizeof(handlers) / sizeof(handlers[0]);
	for (p = 0; p < nhandlers; p++)
		if (ch == handlers[p].format)
			return (handlers[p].fun_ptr(ap));

	_putchar('%');
	_putchar(ch);

	return (2);
}
