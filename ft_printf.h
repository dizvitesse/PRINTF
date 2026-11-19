#ifndef FT_PRINT_H
#define FT_PRINT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int ft_put_unsigned(unsigned int n);
int	ft_puthexa(unsigned long n, char format);
int	ft_putptr(void *ptr);

// int main(void);
#endif