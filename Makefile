# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 14:37:21 by gmarzull          #+#    #+#              #
#    Updated: 2022/06/28 23:36:10 by gmarzull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT		= -L./libft -lft

INCLUDE		= -I./libft \
			  -I.

NAME		= push_swap

SRC			= ft_algo.c \
				ft_check.c \
				ft_error.c \
				ft_min.c \
				ft_op1.c \
				ft_op2.c \
				ft_op3.c \
				ft_pushswap.c \
				ft_sort.c

OBJS		= ${SRC:.c=.o}

HEADER		= push_swap.h

CC			= gcc 

FLAGS		= -Wall -Wextra -Werror
#FLAGS = -g

.c.o:		${CC} ${FLAGS} -c $< -o ${<:c=o}

$(NAME):	${OBJS}
			make -C ./libft
			$(CC) $(FLAGS) $(INCLUDE) $(LIBFT) ./libft/libft.a ${OBJS} -o $(NAME) 

all:		$(NAME)

clean:		
			$(MAKE) clean -C ./libft
			rm -f ${OBJS}

fclean:		clean
			$(MAKE) fclean -C ./libft
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re