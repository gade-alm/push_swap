/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:31:43 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/09 10:49:38 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	i = (t_list *)malloc(sizeof(t_list));
	if (!i)
		return (NULL);
	i->content = content;
	i->next = NULL;
	return (i);
}
