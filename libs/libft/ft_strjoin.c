/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:52:05 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/04 13:23:16 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
			dst[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
			dst[j++] = s2[i++];
	dst[j] = '\0';
	return (dst);
}
