/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:12:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/30 20:59:47 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insert(t_list **head, int item)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->data = item;
	temp->next = NULL;
	temp->head = -1;
	ft_lstadd_back(head, temp);
}

t_list	*create_node(int num)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	temp->data = num;
	temp->next = NULL;
	return (temp);
}

//APAGAR DEPOIS
void	printlist(t_list *n)
{
	while (n != NULL)
	{
		ft_printf("%d\n", n->data);
		n = n->next;
	}
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
