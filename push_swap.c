/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/25 13:12:12 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	insert(t_list **head, int item)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->data = item;
	temp->next = *head;
	*head = temp;
}

int	main(int argc, char **argv)
{
	t_list	*a;
	int		i;
	int		x;

	i = 0;
	a = NULL;
	(void)argv;
	if (argc == 1)
		ft_printf("Error\nWrong number of arguments\n");
	while (argv[++i])
	{	
		x = ft_atoi(argv[i]);
		printf("\n");
		insert(&a, x);
	}
	printList(a);
	free (a);
}
