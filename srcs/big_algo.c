/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/11/25 18:46:41 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	min_max_index(t_list *a)
{
	listcall()->max = INT_MIN;
	while (a)
	{
		if (listcall()->max < a->index)
			listcall()->max = a->index;
		a = a->next;
	}
}

int	find_max_bits(t_list **a)
{
	int		i;

	min_max_index((*a));
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
	number_index(a);
	max_bits = find_max_bits(a);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			tmp = *a;
			if ((tmp->index >> i & 1) == 1)
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
	int		min;
	t_list	*tmp;
	int		i;

	i = -1;
	while (++i < ft_lstsize(*a))
	{
		min = INT_MAX;
		tmp = *a;
		while (tmp)
		{
			if (min > tmp->data && tmp->index == -1)
				min = tmp->data;
			tmp = tmp->next;
		}
		tmp = *a;
		while (min != tmp->data)
			tmp = tmp->next;
		tmp->index = i;
	}
}
