/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:51:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	insert(t_list **head, int item)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->data = item;
	temp->next = NULL;
	temp->index = -1;
	ft_lstadd_back(head, temp);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	int		i;
	int		x;
	t_list	*b;

	i = 0;
	a = NULL;
	if (argc == 1)
		ft_printf("Error\nWrong number of arguments\n");
	while (argv[++i])
	{	
		x = ft_atoi(argv[i]);
		insert(&a, x);
	}
	if (argc == 3)
		algo2(&a);
	if (argc == 4)
		algo3(&a);
	printList(a);
	while (a)
	{
		b = a;
		a = a->next;
		free (b);
	}
}
