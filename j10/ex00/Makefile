# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djsy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 16:31:35 by djsy              #+#    #+#              #
#    Updated: 2019/02/28 21:57:49 by djsy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o

SRCS = ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c ./srcs/ft_putstr.c ./srcs/ft_putchar.c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

$(OBJS): $(SRCS)
	gcc _Wall _Wextra _Werror $^ -c

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
