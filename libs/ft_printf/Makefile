# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 10:12:55 by gade-alm          #+#    #+#              #
#    Updated: 2022/03/16 11:59:21 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS			= 		ft_phex.c ft_ptr.c ft_putchar.c \
					ft_putnbr_uns.c ft_putnbr.c ft_putstr.c \
					ft_printf.c
OBJS			= $(SRCS:.c=.o)

CC 				= gcc
RM				= rm -f
CFLAGS			= -Wall -Werror -Wextra
AR				= ar rcs

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM)	$(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
