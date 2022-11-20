#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include "stdarg.h"

int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print(char *s);

#endif
