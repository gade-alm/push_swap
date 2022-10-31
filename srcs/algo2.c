/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:36:43 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/31 10:28:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo2(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		swap_a(a);
}

t_list	*listcall(void)
{
	static t_list	list;

	return (&list);
}
