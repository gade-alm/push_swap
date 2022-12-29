# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:06:41 by gade-alm          #+#    #+#              #
#    Updated: 2022/12/29 16:24:43 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c \
		srcs/swap.c \
		srcs/reverse_rotate.c \
		srcs/rotate.c \
		srcs/push.c \
		srcs/utils.c \
		srcs/checkers.c \
		srcs/algo_three.c \
		srcs/algo_four.c \
		srcs/parse_numbers.c \
		srcs/big_algo.c \

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= cc

INCLUDES	= -Iincludes -Ilibs/libft -Ilibs/ft_printf

CFLAGS	= -Wall -Wextra -Werror $(INCLUDES) -g -fsanitize=address

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