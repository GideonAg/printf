#include "main.h"

/**
 * print - Writes a non-null char* to stdout.
 *
 * @s: char* to write to stdout.
 * Return: Number of bytes in char*.
 */
int print(char *s)
{
	int nchars = 0;

	while (s[nchars] != '\0')
	{
		_putchar(s[nchars]);
		nchars++;
	}

	return (nchars);
}
