#include "ft_printf.h"

static int	handle_unsigned(unsigned int n)
{
	int	count;
	int	res;

	count = ft_put_unsigned(n / 10);
	if (count == -1)
		return (-1);
	res = ft_put_unsigned(n % 10);
	if (res == -1)
		return (-1);
	return (count + res);
}

int	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n > 9)
		return (handle_unsigned(n));
	else
	{
		c = n + 48;
		return (ft_putchar(c));
	}
}