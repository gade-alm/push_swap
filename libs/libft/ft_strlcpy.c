/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:46 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:31:13 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (dstsize > 0)
	{
		while (src[a] && a < (dstsize - 1))
		{
		dst[a] = src[a];
		a++;
		}
	dst[a] = '\0';
	}
	return (b);
}
