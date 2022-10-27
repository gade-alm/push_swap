/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:00:54 by gade-alm          #+#    #+#             */
/*   Updated: 2022/10/27 17:43:48 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		x;
	t_list	*a;

	a = NULL;
	if (argc == 1)
		ft_printf("Error\nWrong number of arguments\n");
	parse_values(argv, &a);
	x = ft_lstsize(a);
	if (x == 2)
		swap_a(&a);
	if (x == 3)
		algo3(&a);
	printlist(a);
	exit_prog(0, &a);
}
