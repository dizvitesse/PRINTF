
#include "ft_printf.h"
static int	handle_unknown(char specifier)
{
	int	res;
	int	count;

	res = ft_putchar('%');
	if (res == -1)
		return (-1);
	count = ft_putchar(specifier);
	if (count == -1)
		return (-1);
	return (res + count);
}
static int	handle_conversion(char specifier, va_list args)
{
	char	c;

	if (specifier == 'c')
	{
		c = va_arg(args, int);
		return (ft_putchar(c));
	}
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), specifier));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (handle_unknown(specifier));
}
static int	handle_format(const char *format, int i, va_list args)
{
	if (format[i] != '%')
		return (ft_putchar(format[i]));
	if (format[i + 1] == '\0')
		return (-1);
	return (handle_conversion(format[i + 1], args));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		res;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		res = handle_format(format, i, args);
		if (res == -1)
		{
			va_end(args);
			return (-1);
		}
		count += res;
		if (format[i] == '%')
			i++;
		i++;
	}
	va_end(args);
	return (count);
}
