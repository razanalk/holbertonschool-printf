#include "main.h"

/**
 * print_char - Prints a character
 * @args: Variadic arguments list
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
