/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:43:09 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/04 18:58:28 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			signal;
	long long	conv;

	i = 0;
	signal = 1;
	conv = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str [i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = (conv * 10 + (signal * (str[i] - '0')));
			i++;
		if (conv > 2147483647)
			return (-1);
		if (conv < -2147483648)
			return (0);
	}
	return (conv);
}
