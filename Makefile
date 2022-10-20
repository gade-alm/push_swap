# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:06:41 by gade-alm          #+#    #+#              #
#    Updated: 2022/10/20 17:15:35 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= swap.c \
			reverse_rotate.c \
			rotate.c \
			push.c \

OBJS	= $(SRCS:.c=.o)

NAME	= PUSH_SWAP

CC		=	gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -rf

PRINTF	= libs/ft_printf/libftprintf.address

all: $(NAME)

$(NAME): $(PRINTF) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(NAME)

$(PRINTF):
		make -C libs/ft_printf

clean: $(RM) $(OBJS)
		make clean -C libs/ft_printf
		$(RM) a.out

fclean: clean
		$(RM) $(NAME) $(OBJS)
		make fclean -C libs/ft_printf

re: fclean all