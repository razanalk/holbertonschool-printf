#include "main.h"

/**
 * print_string - Prints a string
 * @args: Variadic arguments list
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);

	/* Handle NULL string */
	if (!str)
		str = "(null)";

	/* Print each character */
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
