/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/11/23 16:47:49 by gade-alm         ###   ########.fr       */
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

	i = 0;
	tmp = *a;
	(void)b;
	while (tmp)
	{
		if (tmp->data & 1)
		{
			while (i >= 0)
			{
				r_rotate_a(a);
				i--;
			}
			printf("%i\n", i);
			if (i == 0)
				push_b(b, a);
		}
		tmp = tmp->next;
		i++;
	}
}
