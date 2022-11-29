/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:13 by gabriel           #+#    #+#             */
/*   Updated: 2022/11/29 16:39:27 by gade-alm         ###   ########.fr       */
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

void	algo4(t_list **a, t_list **b)
{
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	algo3(a);
	if ((*b)->data == listcall()->max)
	{
		push_a(a, b);
		rotate_a(a);
	}
	else if ((*b)->data == listcall()->min)
		push_a(a, b);
}

void	algo5(t_list **a, t_list **b)
{
	min_max_num((*a));
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	while ((*a)->data != listcall()->min && (*a)->data != listcall()->max)
		rotate_a(a);
	push_b(b, a);
	algo3(a);
	while (*b)
		if ((*b)->data == listcall()->max || ((*b)->data == listcall()->min))
			push_a(a, b);
}
