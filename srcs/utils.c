/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:12:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/21 11:38:20 by gade-alm         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int signal;
	long num;
	int	i;
	
	i = 0;
	signal = 1;
	num = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-')
		{
			signal *= -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10 + (signal * (str[i] - '0')));
		i++;
	}
	return (num);
}

//APAGAR DEPOIS
void printList(t_list *n)
{
    while (n != NULL)
	{
        ft_printf("%d", n->data);
        n = n->next;
    }
}
  