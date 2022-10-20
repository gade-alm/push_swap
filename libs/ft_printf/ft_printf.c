/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:23:45 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/16 14:01:35 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	check_arg(const char *format, int i, va_list args)
{
	if (format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format[i + 1] == 'u')
		return (ft_putnbr_uns(va_arg(args, unsigned int)));
	if (format[i + 1] == 'x')
		return (ft_lphex(va_arg(args, unsigned int)));
	if (format[i + 1] == 'X')
		return (ft_hphex(va_arg(args, unsigned int)));
	else if (format[i + 1] == 'p')
		return (ft_putstr("0x") + ft_ptr(va_arg(args, t_llu)));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret += check_arg(format, i, args);
			i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
