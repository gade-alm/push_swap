/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:59:58 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/16 13:51:15 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lphex(unsigned int n)
{
	int				i;

	if (n >= 16)
		ft_lphex(n / 16);
	write (1, &"0123456789abcdef"[n % 16], 1);
	i = 1;
	if (n >= 16)
	{
		while (n > 15)
		{
			n /= 16;
			i++;
		}
	}
	return (i);
}

int	ft_hphex(unsigned int n)
{
	int				i;

	if (n >= 16)
		ft_hphex(n / 16);
	write (1, &"0123456789ABCDEF"[n % 16], 1);
	i = 1;
	if (n >= 16)
	{
		while (n > 15)
		{
			n /= 16;
			i++;
		}
	}
	return (i);
}