/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:01:34 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/31 08:13:09 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!b)
		return ;
	tmp = (*a)->next;
	(*a)->next = *b;
	(*b) = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!a)
		return ;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	ft_printf("pb\n");
}
