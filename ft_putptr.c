/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsabbar <rsabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:15:13 by rsabbar           #+#    #+#             */
/*   Updated: 2026/11/20 18:17:38 by rsabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
