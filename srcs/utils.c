/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:12:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:51:03 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*create_node(int num)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return NULL;
	temp->data = num;
	temp->next = NULL;
	return(temp);
}

//APAGAR DEPOIS
void printList(t_list *n)
{
    while (n != NULL)
	{
        ft_printf("%d\n", n->data);
        n = n->next;
    }
}
  