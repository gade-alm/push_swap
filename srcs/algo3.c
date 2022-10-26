/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:19:35 by gabriel           #+#    #+#             */
/*   Updated: 2022/10/26 21:54:45 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo3(t_list **a)
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
	(*a)->next->next->data) && (*a)->data < (*a)->next->next->data)
		rotate_a(a);
	if (((*a)->data < (*a)->next->data) && ((*a)->next->data < \
	(*a)->next->next->data) && (*a)->data > (*a)->next->next->data)
	{
		swap_a(a);
		r_rotate_a(a);
	}
	return ;
}
