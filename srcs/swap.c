/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:16:20 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/23 11:02:25 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    swap_a(t_list **a)
{
    t_list *tmp;
	(*a)->data = 1;
	
    tmp = (*a)->next;
	ft_printf("tmp: %i\n a:%i\n", tmp->data,(*a)->data);
    (*a)->next = tmp->next;
	ft_printf("tmp: %i\n a:%i\n", tmp->data,(*a)->data);
    tmp->next = *a;
	ft_printf("tmp: %i\n a:%i\n", tmp->data,(*a)->data);
    *a = tmp;
	printf("tmp: %i\n a:%i\n", tmp->data,(*a)->data);
    ft_printf("sa\n");
}

void    swap_b(t_list **b)
{
    t_list *tmp;

    tmp = (*b)->next;
    (*b)->next = tmp->next;
    tmp->next = *b;
    *b = tmp;
    ft_printf("sb\n");
}


void    swap_both(t_list **a, t_list **b)
{
    t_list *tmp;

    tmp = (*a)->next;
    (*a)->next = tmp->next;
    tmp->next = *a;
    *a = tmp;
    tmp = (*b)->next;
    (*b)->next = tmp->next;
    tmp->next = *b;
    *b = tmp;
    ft_printf("ss\n");
}
