/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:07:21 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/16 13:57:29 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef unsigned long long	t_llu;

int	ft_lphex(unsigned int n);
int	ft_ptr(unsigned long long n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbr_uns(unsigned int n);
int	ft_putstr(char *s);
int	ft_printf(const char *format, ...);
int	ft_hphex(unsigned int n);

#endif