#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	/* Print digits recursively */
	if (n / 10)
		count += print_number(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
