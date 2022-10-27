/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:17:13 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/27 17:51:16 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"
# include <limits.h>
# include <stdio.h>

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
void	printlist(t_list *n);
long	parse_args(char	**str);
void	parse_values(char **argv, t_list **a);
void	insert(t_list **head, int item);
void	exit_prog(int i, t_list **a);
void	free_list(t_list **a);


#endif