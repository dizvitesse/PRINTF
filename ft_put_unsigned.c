#include "ft_printf.h"

int ft_put_unsigned(unsigned int n)
{
    char c;
    if (n > 9)
    	return (ft_put_unsigned(n / 10) + ft_put_unsigned(n % 10));
    else 
    {
        c = n + 48;
        return(ft_putchar(c));
    }
}