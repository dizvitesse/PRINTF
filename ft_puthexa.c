/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsabbar <rsabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:15:07 by rsabbar           #+#    #+#             */
/*   Updated: 2026/11/21 09:02:28 by rsabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_hexa(unsigned long n, char format)
{
	int	count;
	int	res;

	count = ft_puthexa(n / 16, format);
	if (count == -1)
		return (-1);
	res = ft_puthexa(n % 16, format);
	if (res == -1)
		return (-1);
	return (count + res);
}

int	ft_puthexa(unsigned long n, char format)
{
	const char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n > 15)
	{
		return (handle_hexa(n, format));
	}
	else
		return (ft_putchar(hex[n]));
}
