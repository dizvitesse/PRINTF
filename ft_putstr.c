#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		if (ft_putchar(s[i]) == -1)
        	return (-1);
		i++;
	}
    return (i);
}
