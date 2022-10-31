/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:13 by gabriel           #+#    #+#             */
/*   Updated: 2022/10/31 11:35:15 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	min_max_num(t_list *a)
{
	listcall()->min = 214784368;
	listcall()->max = -214784362;

	while (a)
	{
		if (listcall()->min > a->data)
			listcall()->min = a->data;
		if (listcall()->max < a->data)
			listcall()->max = a->data;
		a = a->next;
	}
}

void	algo4(t_list **a, t_list **b)
{
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	algo3(a);
	if ((*b)->data == listcall()->max)
	{
		push_a(b, a);
		rotate_a(a);
	}
	else if ((*b)->data == listcall()->min)
	{
		push_a(b, a);
	}
}
