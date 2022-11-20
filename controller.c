#include "main.h"

/**
 * controller - Controls how format directives are handled.
 *
 * @format: char* with zero or more format directives.
 * @ap: va_list of format parameters.
 * Return: Number of characters written to stdout.
 */
int controller(const char *s, va_list ap)
{
	int p, i = 0, nchars = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			p = directive_controller(ap, s[++i]);

			if (p == -1)
				return (-1);

			nchars += p;
			i++;
			continue;
		}

		_putchar(s[i]);
		nchars++;
		i++;
	}

	return (nchars);
}
