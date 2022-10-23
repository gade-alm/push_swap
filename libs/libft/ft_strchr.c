/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:15:15 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:27:58 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		a;

	a = 0;
	str = (char *) s;
	while (str[a] != (unsigned char)c)
	{
		if (str[a] == '\0')
			return (NULL);
		a++;
	}
	return (&str[a]);
}
