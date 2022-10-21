# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:06:41 by gade-alm          #+#    #+#              #
#    Updated: 2022/10/21 11:42:16 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c \
		srcs/swap.c \
		srcs/reverse_rotate.c \
		srcs/rotate.c \
		srcs/push.c \
		srcs/utils.c \
		srcs/checkers.c \
		srcs/list_utils.c \

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror #-g -fsanitize=address

RM		= rm -rf

PRINTF	= libs/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(PRINTF) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -Llibs/ft_printf -l:libftprintf.a -o $(NAME)

$(PRINTF):
		make -C libs/ft_printf

clean: 
	$(RM) $(OBJS)
	make clean -C libs/ft_printf
	$(RM) a.out

fclean: clean
	$(RM) $(NAME) $(OBJS)
	make fclean -C libs/ft_printf

re: fclean all