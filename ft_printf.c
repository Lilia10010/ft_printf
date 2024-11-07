#include "ft_printf.h"

static void handle_format_specifier(char specifier, va_list args)
{
    if (specifier == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
    else if (specifier == 's')
        ft_putstr_fd(va_arg(args, char *), 1);
    else if (specifier == 'p')
        ft_putptr_fd(va_arg(args, void *), 1);
    else if (specifier == 'd' || specifier == 'i')
        ft_putnbr_fd(va_arg(args, int), 1);
    else if (specifier == 'u')
        ft_putuint_fd(va_arg(args, unsigned int), 1);
    else if (specifier == 'x')
        write(1, "x", 1);
    else if (specifier == 'X')
        write(1, "X", 1);
    else if (specifier == '%')
        write(1, "%", 1);
    else
    {
        write(1, "%", 2);
        write(1, &specifier, 1);
    }
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            handle_format_specifier(*format, args);
        }
        else
            write(1, format, 1);
        format++;
    }

    va_end(args);
    return (1);
}