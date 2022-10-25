/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:01:34 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/25 11:02:47 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*a);
}

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*b);
}
