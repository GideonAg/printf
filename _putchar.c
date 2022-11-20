#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: character to be written to stdout
 * Return: one on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
