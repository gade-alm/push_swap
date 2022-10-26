/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:16:20 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:51:02 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("sb\n");
}


void	swap_both(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = *a;
	*a = tmp;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("ss\n");
}
