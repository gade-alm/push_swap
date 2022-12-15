/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:12:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/12/15 15:17:50 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insert(t_list **head, int item)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->data = item;
	temp->next = NULL;
	temp->index = -1;
	ft_lstadd_back(head, temp);
}

t_list	*create_node(int num)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	temp->data = num;
	temp->index = -1;
	temp->next = NULL;
	return (temp);
}

void	exit_prog(int i, t_list **a)
{
	if (i)
		write(STDERR_FILENO, "Error\n", 6);
	free_list(a);
	exit(i);
}

void	free_list(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		free (tmp);
	}
}
