/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:16:59 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/07 13:19:18 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		a;
	int		len;

	a = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (a < len)
	{
		ptr[a] = s1[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
