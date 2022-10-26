/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:06:07 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:51:00 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	*a = tmp;
	ft_printf("ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	*b = tmp;
	ft_printf("rb\n");
}

void	rotate_both(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	*a = tmp;
	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	*b = tmp;
	ft_printf("rr\n");
}
