/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:41:43 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:20:43 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			a;

	a = 0;
	str = (unsigned char *) s;
	while (a < n)
	{
		if (str[a] == (unsigned char)c)
			return ((void *)(str + a));
		a++;
	}
	return (NULL);
}
