/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/11/22 18:54:59 by gade-alm         ###   ########.fr       */
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

	tmp = *a;
	while (tmp)
	{
		if (((tmp->data << 6)& 1))
			push_b(b, a);
		tmp = tmp->next;
	}
}
