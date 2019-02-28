# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djsy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 16:31:35 by djsy              #+#    #+#              #
#    Updated: 2019/02/28 17:22:06 by djsy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c ./srcs/ft_putstr.c ./srcs/ft_putchar.c

all: 
	$(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra -I ./includes $(SRCS) 
	ar -rc $(NAME) ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o
	ranlib $(NAME)

clean: 
	/bin/rm -f ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all
