/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:36:38 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/20 17:14:49 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int n)
{
	int		i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putnbr_uns(n / 10);
		i += ft_putnbr_uns(n % 10);
	}
	else
		i += ft_putchar((n % 10) + 48);
	return (i);
}
