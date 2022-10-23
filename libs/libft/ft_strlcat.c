/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:22:38 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:31:10 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	a;

	a = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (dst[a] != '\0')
		a++;
	while (a < dstsize - 1 && *src)
	{
		dst[a] = *src;
		src++;
		a++;
	}
	dst[a] = '\0';
	return (dstlen + srclen);
}
