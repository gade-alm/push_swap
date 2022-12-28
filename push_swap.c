/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/12/28 18:26:46 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc <= 1)
		exit_prog(0, &a);
	parse_values(argv, &a);
	if (check_dup(a) == 0)
		exit_prog(1, &a);
	if (check_order(a) == 0)
	{
		if (ft_lstsize(a) == 2)
			swap_a(&a);
		if (ft_lstsize(a) == 3)
			algo_three(&a);
		if (ft_lstsize(a) == 4)
			algo_four(&a, &b);
		if (ft_lstsize(a) == 5)
			algo_five(&a, &b);
		if (ft_lstsize(a) >= 6)
			binary_sort(&a, &b);
	}
	exit_prog(0, &a);
}
