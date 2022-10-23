/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:47:27 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/08 14:31:13 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char const *s, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

char	*ft_word(const char *s, char c)
{
	char			*word;
	int				i;
	int				len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		countstr;
	int		i;

	if (!s)
		return (NULL);
	countstr = ft_strcount(s, c);
	str = (char **)malloc(sizeof(char *) * (countstr + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < countstr)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			str[i] = ft_word(s, c);
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	str[i] = NULL;
	return (str);
}
