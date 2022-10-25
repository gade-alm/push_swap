/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:17:13 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/25 11:10:10 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/ft_printf/ft_printf.h"
# include <stdio.h>

typedef struct s_list	t_list;
struct s_list{
	int		data;
	int		index;
	t_list	*next;
};
//Algorithms
void	algo2(t_list **a);

//Moves
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);

//Utils
int		ft_atoi(const char *str);
t_list	*create_node(int num);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		check_dup(t_list *a);
void	printList(t_list *n);
void	insert(t_list **head, int item);


#endif