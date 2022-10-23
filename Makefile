# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:06:41 by gade-alm          #+#    #+#              #
#    Updated: 2022/10/23 11:17:03 by gabrieldeal      ###   ########.fr        #
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

LIBFT = libs/Libft/libft.a

all: $(NAME)

$(NAME): $(PRINTF) $(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -Llibs/ft_printf -l:libftprintf.a -Llibs/libft -l:libft.a -o $(NAME)

$(PRINTF):
		make -C libs/ft_printf

$(LIBFT):
		make -C libs/libft
		
clean: 
	$(RM) $(OBJS)
	make clean -C libs/ft_printf
	make clean -C libs/libft
	$(RM) a.out

fclean: clean
	$(RM) $(NAME) $(OBJS)
	make fclean -C libs/ft_printf
	make fclean -C libs/libft

re: fclean all