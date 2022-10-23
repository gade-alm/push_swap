/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/23 11:19:49 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void insert(t_list **head, int item)
{
    t_list *temp = malloc(sizeof(t_list));
    temp->data = item;
    temp->next = *head;
    *head = temp;
}

int main(int argc, char **argv)
{
	// t_list	**a;
	
	(void)argv;
	if (argc == 1)
		ft_printf("Error\nWrong number of arguments\n");
}
