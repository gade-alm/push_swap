/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:13 by gabriel           #+#    #+#             */
/*   Updated: 2022/12/28 18:23:26 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	min_max_num(t_list *a)
{
	listcall()->min = INT_MAX;
	listcall()->max = INT_MIN;
	while (a)
	{
		if (listcall()->min > a->data)
			listcall()->min = a->data;
		if (listcall()->max < a->data)
			listcall()->max = a->data;
		a = a->next;
	}
}

void	algo_four(t_list **a, t_list **b)
{
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	algo_three(a);
	if ((*b)->data == listcall()->max)
	{
		push_a(a, b);
		rotate_a(a);
	}
	else if ((*b)->data == listcall()->min)
		push_a(a, b);
}

void	algo_five(t_list **a, t_list **b)
{
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	algo_three(a);
	while (*b)
	{
		push_a(a, b);
		if ((*a)->data > (*a)->next->data)
			rotate_a(a);
	}
}
