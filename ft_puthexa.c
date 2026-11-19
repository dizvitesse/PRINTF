#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
    const char * hex;

    if (format == 'x')
        hex = "0123456789abcdef";
    else 
        hex = "0123456789ABCDEF";
    if (n > 15)
    {
        return(ft_puthexa(n / 16, format) + ft_puthexa(n % 16, format));
    }
    else 
        return(ft_putchar(hex[n]));
}
