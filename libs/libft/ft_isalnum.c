/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:28:52 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 11:19:50 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 48 && argument <= 57)
		|| (argument >= 97 && argument <= 122)
		|| (argument >= 65 && argument <= 90))
		return (1);
	return (0);
}
