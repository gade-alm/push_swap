/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:06:07 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/27 16:31:00 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	(*a)->next = NULL;
	*a = tmp;
	ft_printf("ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	(*b)->next = NULL;
	*b = tmp;
	ft_printf("rb\n");
}

void	rotate_both(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	(*a)->next = NULL;
	*a = tmp;
	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	(*b)->next = NULL;
	*b = tmp;
	ft_printf("rr\n");
}
