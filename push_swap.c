/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/31 18:18:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		ft_printf("Error\nWrong number of arguments\n");
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
		if (lt_lstsize(a) == 5)
			algo5(&a, &b);
	}
	// ft_printf("a:\n");
	// printlist(a);
	// printf("\nb:\n");
	// printlist(b);
	exit_prog(0, &a);
}
