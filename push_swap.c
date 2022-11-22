/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/11/22 17:27:35 by gade-alm         ###   ########.fr       */
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
	check_dup(a);
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
		if (ft_lstsize(a) == 6)
			binary_sort(&a, &b);
	}
	ft_printf("a:\n");
	printlist(a);
	printf("\nb:\n");
	printlist(b);
	exit_prog(0, &a);
}
