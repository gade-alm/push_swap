/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:02:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/12/15 15:18:15 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_dup(t_list *a)
{
	t_list	*ptr;

	while (a)
	{
		ptr = a->next;
		while (ptr)
		{
			if (a->data == ptr->data)
				exit_prog(1, &a);
			ptr = ptr->next;
		}
		a = a->next;
	}
	return (1);
}

int	check_order(t_list *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}
