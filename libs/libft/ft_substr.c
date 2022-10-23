/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:32:39 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:31:38 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
