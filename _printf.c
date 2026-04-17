#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;

    if (!format)
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;

            if (format[i] == '\0')
                return (-1);

            if (format[i] == 'c')
            {
                _putchar(va_arg(args, int));
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                int j = 0;

                if (!str)
                    str = "(null)";

                while (str[j])
                {
                    _putchar(str[j]);
                    j++;
                    count++;
                }
            }
            else if (format[i] == '%')
            {
                _putchar('%');
                count++;
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                count += print_number(va_arg(args, int));
            }
            else
            {
                _putchar('%');
                _putchar(format[i]);
                count += 2;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }

        i++;
    }

    va_end(args);
    return (count);
}
