/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:57:59 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:20:48 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f1;
	unsigned char	*f2;

	f1 = (unsigned char *) s1;
	f2 = (unsigned char *) s2;
	while (n)
	{
		if (*f1 != *f2)
			return (*f1 - *f2);
		f1++;
		f2++;
		n--;
	}
	return (0);
}
