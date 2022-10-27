/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:35:55 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/27 19:04:15 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	parse_args(char	**str)
{
	long long	num;
	int			conv;

	num = 0;
	conv = 1;
	while (**str == 32 || (**str > 8 && **str < 14))
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			conv *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		num = (num * 10 + (conv * (**str - '0')));
		if (num > INT_MAX || num < INT_MIN)
			return (2147483648);
		*str += 1;
	}
	if (!(**str == 32 || (**str > 8 && **str < 14)) && **str)
		return (2147483648);
	return (num);
}

void	parse_values(char **argv, t_list **a)
{
	int		i;
	long	num;
	char	*str;

	i = 0;
	while (argv[++i])
	{
		str = argv[i];
		while (*str == 32 || (*str > 8 && *str < 14))
			str++;
		if (((*str == '+' || *str == '-') || !*str))
			exit_prog(1, a);
		while (*str)
		{
			num = parse_args(&str);
			if (num > INT_MAX)
				exit_prog(1, a);
			insert(a, num);
		}
	}
}
