/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/11/25 16:48:26 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max_bits(t_list **a)
{
	int		i;

	min_max_num((*a));
	i = 0;
	while (listcall()->max != 0 && ++i)
		listcall()->max = (listcall()->max >> 1);
	return (i);
}

void	binary_sort(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;
	int		max_bits;
	int		len;
	int		j;

	len = ft_lstsize(*a);
	i = -1;
	max_bits = find_max_bits(a);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			tmp = *a;
			if ((tmp->data >> i & 1) == 1)
				rotate_a(a);
			else
				push_b(b, a);
		}
		while (ft_lstsize(*b) != 0)
			push_a(a, b);
	}
}

void	number_index(t_list **a)
{
	
}