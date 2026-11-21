/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsabbar <rsabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:15:10 by rsabbar           #+#    #+#             */
/*   Updated: 2026/11/20 18:23:10 by rsabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_number(int n)
{
	int	count;
	int	res;

	count = ft_putnbr(n / 10);
	if (count == -1)
		return (-1);
	res = ft_putnbr(n % 10);
	if (res == -1)
		return (-1);
	return (count + res);
}

static int	handle_negative(int n)
{
	int	res;
	int	count;

	res = ft_putchar('-');
	if (res == -1)
		return (-1);
	count = ft_putnbr(-n);
	if (count == -1)
		return (-1);
	return (res + count);
}

int	ft_putnbr(int n)
{
	char	c;
	int		res;

	if (n == -2147483648)
	{
		res = ft_putstr("-2147483648");
		if (res == -1)
			return (-1);
		return (res);
	}
	else if (n < 0)
		return (handle_negative(n));
	else if (n > 9)
		return (handle_number(n));
	else
	{
		c = n + 48;
		return (ft_putchar(c));
	}
}
