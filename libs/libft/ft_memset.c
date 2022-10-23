/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:42 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:20:56 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*p;

	a = 0;
	p = b;
	while (a < len)
	{
		p[a] = c;
			a++;
	}
	return (b);
}
