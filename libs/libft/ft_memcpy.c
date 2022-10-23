/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:14:49 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:20:50 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*z;
	size_t	a;

	p = (char *)dst;
	z = (char *)src;
	if (n == 0 || dst == src)
		return (dst);
	a = 0;
	while (a < n)
	{
	p[a] = z[a];
	a++;
	}
	return (p);
}
