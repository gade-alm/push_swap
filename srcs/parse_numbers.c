/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:35:55 by gade-alm          #+#    #+#             */
/*   Updated: 2022/12/29 16:25:46 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	is_nbr(char *s, t_list **a)
{
	while (*s == ' ' || (*s > 8 && *s < 14))
		s++;
	if (*s == '+' || *s == '-')
		s++;
	if (*s < '0' || *s > '9')
		exit_prog(1, a);
	while (*s >= '0' && *s <= '9')
		s++;
	if (*s != ' ' && (*s <= 8 || *s >= 14) && *s)
		exit_prog(1, a);
}

long	parse_args(char	**str)
{
	long long	num;
	int			conv;

	num = 0;
	conv = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			conv *= -1;
		*str += 1;
	}
	while (**str >= '0' && *(*str) <= '9')
	{
		num = (num * 10 + (conv * (**str - '0')));
		if (num > INT_MAX || num < INT_MIN)
			exit_prog(1, &listcall()->next);
		*str += 1;
	}
	while (**str == ' ' || (**str > 8 && **str < 14))
		*str += 1;
	if (**str && (**str > 8 && **str < 14) && (**str != ' '))
		exit_prog(1, &listcall()->next);
	return (num);
}

void	parse_values(char **argv, t_list **a)
{
	int		i;
	long	num;
	char	*str;

	i = 0;
	while (argv[++i] && argv)
	{
		str = argv[i];
		if (!*str)
			exit_prog(1, a);
		while (*str)
		{
			while (*str == ' ')
				str++;
			is_nbr(str, a);
			num = parse_args(&str);
			insert(a, num);
		}
	}
}
