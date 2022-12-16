/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/12/16 16:51:26 by gade-alm         ###   ########.fr       */
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
			algo2(&a);
		if (ft_lstsize(a) == 3)
			algo3(&a);
		if (ft_lstsize(a) == 4)
			algo4(&a, &b);
		if (ft_lstsize(a) == 5)
			algo5(&a, &b);
		if (ft_lstsize(a) >= 6)
			binary_sort(&a, &b);
	}
	exit_prog(0, &a);
}
