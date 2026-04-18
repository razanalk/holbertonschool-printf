#include "main.h"

/**
 * _printf - Produces output according to a format string
 * @format: Format string containing conversion specifiers
 *
 * Return: Number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	/* Return (-1) if format string is NULL */
	if (!format)
		return (-1);

	/* Initialize variadic arguments */
	va_start(args, format);

	/* Loop through format string */
	while (format[i])
	{
		/* Handle format specifiers */
		if (format[i] == '%')
		{
			i++;

			/* Return (-1) if '%' is last character */
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			count += handle_specifier(format[i], args);
		}
		else
		{
			/* Print regular character */
			_putchar(format[i]);
			count++;
		}

		i++;
	}

	/* Clean up variadic arguments */
	va_end(args);
	return (count);
}
