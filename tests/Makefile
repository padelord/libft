#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padelord <padelord@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 01:36:23 by padelord          #+#    #+#              #
#    Updated: 2018/11/08 01:58:08 by padelord         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	testlib

SRC		=	main.c

OBJ		=	$(SRC:.c=.o)

LDFLAGS	=	-lft -L./..

CFLAGS	=	-Wall -Wextra -I./../includes/ -g3

$(NAME): all

all: $(OBJ)
	gcc $(OBJ) -o $(NAME) -L./.. -lft

lib:
	make re -C ../
	make

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all