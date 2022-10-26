/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:02:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:50:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_dup(t_list *a)
{
	t_list	*ptr;

	while (a->next != NULL)
	{
		ptr = a->next;
		while (ptr->next != NULL)
		{
			if (a->data == ptr->data)
			{
				ft_printf("Error\nNumber duplicated\n");
				break ;
			}
			ptr = ptr->next;
		}
		a = a->next;
	}
	return (1);
}
