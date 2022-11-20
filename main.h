#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include "stdarg.h"

int _putchar(char c);
int print_char(va_list ap);
int _printf(const char *format, ...);
int print_string(va_list ap);
int print(char *s);
int controller(const char *, va_list);
int directive_controller(va_list, int);
char *_itoa(long int num, int base);
int print_int(va_list);

/**
 * struct format - A format typedef
 * @format: character for format directive
 * @fun_ptr: pointer of function to hold handler function
 */
typedef struct format
{
	char format;
	int (*fun_ptr)(va_list);
} format;

#endif
