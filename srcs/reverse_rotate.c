/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:01:31 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:50:58 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	r_rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(a, tmplast);
	*a = tmplast;
	ft_printf("rra\n");
}

void	r_rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(b, tmplast);
	*b = tmplast;
	ft_printf("rrb\n");
}

void	r_rotate_both(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(a, tmplast);
	*a = tmplast;
	tmplast = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(b, tmplast);
	*b = tmplast;
	ft_printf("rrr\n");
}
