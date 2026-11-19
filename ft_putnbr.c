#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
		return (1 + (ft_putnbr(n)));
	}
	else if (n > 9)
	{
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
	}
	else
	{
		c = n + 48;
		return (ft_putchar(c));
	}
}
