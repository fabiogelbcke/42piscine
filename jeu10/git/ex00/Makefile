#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 17:32:46 by fschuber          #+#    #+#              #
#    Updated: 2014/09/09 21:58:15 by fschuber         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS= -Wextra -Werror -Wall
SOURCES=	srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strlen.c \
			srcs/ft_swap.c \
			includes/ft.h 

OBJECTS=	ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

NAME=libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) includes/ft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all