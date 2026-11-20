#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;
	int	res;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count = ft_putchar('0');
	if (count == -1)
		return (-1);
	res = ft_putchar('x');
	if (res == -1)
		return (-1);
	count += res;
	res = ft_puthexa((unsigned long)ptr, 'x');
	if (res == -1)
		return (-1);
	count += res;
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		a;
// 	int		count;
// 	void	*ptr;

// 	a = 42;
// 	ptr = &a;

// 	printf("System printf: %p\n", ptr);

// 	printf("Our ft_putptr: ");
// 	count = ft_putptr(ptr);
// 	printf("\nCount: %d\n", count);

// 	return (0);
// }