#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 17:32:46 by fschuber          #+#    #+#              #
#    Updated: 2014/09/11 23:09:19 by fschuber         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS= -Wextra -Werror -Wall
SOURCES=	srcs/main.c

OBJECTS=	main.o

NAME=ft_display_file

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all