#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int handle_specifier(char c, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_number(int n);
int _putchar(char c);

#endif
