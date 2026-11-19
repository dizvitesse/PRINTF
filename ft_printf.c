#include "ft_printf.h"

static int	handle_conversion(char specifier, va_list args)
{
    if (specifier == 'c')
    {
        char c;
        c = va_arg(args, int);
        return(ft_putchar(c));
    }
    else if (specifier == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (specifier == 'd' || specifier == 'i')
        return(ft_putnbr(va_arg(args, int)));
    else if (specifier == 'u')
        return(ft_put_unsigned(va_arg(args, unsigned int)));
    else if (specifier == 'x' || specifier == 'X')
        return (ft_puthexa(va_arg(args, unsigned int), specifier));
    else if (specifier == 'p')
        return(ft_putptr(va_arg(args,void *)));
    else if (specifier == '%')
        return (ft_putchar('%'));
    else
	    return (ft_putchar('%') + ft_putchar(specifier));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
    if (!format)
    {
        va_end(args);
        return (-1);
    }
	va_start(args, format);
    while(format[i] != '\0')
        {
            if (format[i] != '%')
            {
                write(1,&format[i],1);
                count++;
            }
            else
                count += handle_conversion(format[++i], args);
            i++;
        }
        va_end(args);
        return(count);
}

