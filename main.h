#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include "stdarg.h"

int _putchar(char c);
int print_char(va_list ap);
int _printf(const char *format, ...);

/**
 * struct format - A format typedef
 * @format: character for format directive
 * @fun_ptr: pointer of function to hold handler function
 */

typedef struct format
{
	char format;
	int (*fun_ptr)(va_list);
}

int print_string(va_list ap);
int print(char *s);

#endif
