# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egwanula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 18:31:56 by egwanula          #+#    #+#              #
#    Updated: 2022/03/09 14:54:24 by egwanula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	=	${SRCS:.c=.o}
HEADER = includes

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC}	${CFLAGS}	-I	${HEADER}	-c	$<	-o	${<:.c=.o} 

all:	${NAME}

$(NAME):	${OBJS}
	ar	rc	${NAME}	${OBJS}

clean:
	rm -f	${OBJS}

fclean:	clean
	rm -f $(NAME)

re:	fclean all
