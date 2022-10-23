/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:53:34 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/04 13:18:20 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] != 0) && (s2 != 0) && (s1[a] == s2[a]) && (a < n - 1))
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
