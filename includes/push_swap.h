/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:17:13 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/26 21:50:35 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"
# include <stdio.h>

// typedef struct s_pslist	t_pslist;
// struct s_pslist{
// 	int			data;
// 	int			index;
// 	t_pslist	*next;
// };
//Algorithms
void	algo2(t_list **a);
void	algo3(t_list **a);

//Moves
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	r_rotate_a(t_list **a);
void	r_rotate_b(t_list **b);
void	r_rotate_both(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_both(t_list **a, t_list **b);


//Utils
int		ft_atoi(const char *str);
t_list	*create_node(int num);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		check_dup(t_list *a);
void	printList(t_list *n);
void	insert(t_list **head, int item);


#endif