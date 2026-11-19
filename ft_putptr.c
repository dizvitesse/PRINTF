#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
    int count;

    if (ptr == NULL)
        return (ft_putstr("(nil)"));
    count = ft_putchar('0');
    count += ft_putchar('x');
    count += ft_puthexa((unsigned long) ptr, 'x');
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