#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
<<<<<<< HEAD
#include <stdarg.h>
=======
#include "stdarg.h"
>>>>>>> 2147413e147b65c35fdc4868f61b0fd191b3d1e3

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

#endif
