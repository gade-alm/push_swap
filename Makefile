# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:06:41 by gade-alm          #+#    #+#              #
#    Updated: 2022/12/16 17:01:28 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c \
		srcs/swap.c \
		srcs/reverse_rotate.c \
		srcs/rotate.c \
		srcs/push.c \
		srcs/utils.c \
		srcs/checkers.c \
		srcs/algo2.c \
		srcs/algo3.c \
		srcs/algo4.c \
		srcs/parse_numbers.c \
		srcs/big_algo.c \

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

RM		= rm -rf

PRINTF	= libs/ft_printf/libftprintf.a

LIBFT = libs/libft/libft.a

all: $(NAME)

$(NAME):	$(PRINTF) $(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -Llibs/ft_printf -lftprintf -Llibs/libft -lft -o $(NAME)

$(PRINTF):
		make -C libs/ft_printf

$(LIBFT):
		make -C libs/libft
		
clean: 
	$(RM) $(OBJS)
	make clean -C libs/ft_printf
	make clean -C libs/libft

fclean: clean
	$(RM) $(NAME) $(OBJS)
	make fclean -C libs/ft_printf
	make fclean -C libs/libft

re: fclean all