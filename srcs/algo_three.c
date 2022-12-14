/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:19:35 by gabriel           #+#    #+#             */
/*   Updated: 2022/12/28 18:20:23 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_three(t_list **a)
{
	if (((*a)->data < (*a)->next->data) && ((*a)->next->data > \
	(*a)->next->next->data) && ((*a)->data < (*a)->next->next->data))
	{
		swap_a(a);
		rotate_a(a);
	}
	if (((*a)->data < (*a)->next->data) && ((*a)->next->data > \
	(*a)->next->next->data) && (*a)->data > (*a)->next->next->data)
		r_rotate_a(a);
	if (((*a)->data > (*a)->next->data) && ((*a)->next->data < \
	(*a)->next->next->data) && (*a)->data < (*a)->next->next->data)
		swap_a(a);
	if (((*a)->data > (*a)->next->data) && ((*a)->next->data < \
	(*a)->next->next->data) && (*a)->data > (*a)->next->next->data)
		rotate_a(a);
	if (((*a)->data > (*a)->next->data) && ((*a)->next->data > \
	(*a)->next->next->data) && (*a)->data > (*a)->next->next->data)
	{
		swap_a(a);
		r_rotate_a(a);
	}
	return ;
}
