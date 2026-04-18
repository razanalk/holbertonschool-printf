#include "main.h"

/**
 * handle_specifier - Handles format specifiers
 * @c: Specifier character
 * @args: Variadic arguments list
 *
 * Return: Number of characters printed
 */
int handle_specifier(char c, va_list args)
{
	/* Print character */
	if (c == 'c')
		return (print_char(args));

	/* Print string */
	else if (c == 's')
		return (print_string(args));

	/* Print literal '%' */
	else if (c == '%')
		return (_putchar('%'));

	/* Print integer */
	else if (c == 'd' || c == 'i')
		return (print_number(va_arg(args, int)));

	/* Handle unknown specifier */
	_putchar('%');
	_putchar(c);
	return (2);
}
