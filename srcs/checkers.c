/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:02:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/31 12:05:20 by gabriel          ###   ########.fr       */
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
			{
				ft_printf("Error\nNumber duplicated\n");
				exit_prog(1, &a);
			}
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
