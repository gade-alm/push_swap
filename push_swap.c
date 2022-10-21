/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/21 11:42:34 by gade-alm         ###   ########.fr       */
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

int main(void)
{
	t_list *teste=NULL;
	insert(&teste, 5);
    insert(&teste, 7);
    insert(&teste, 4);
    insert(&teste, 1);
    insert(&teste, 4);
	
	check_dup(teste);
}
