#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padelord <padelord@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 01:36:23 by padelord          #+#    #+#              #
#    Updated: 2018/12/03 00:09:32 by padelord         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	testlib

CC	=	gcc

SRC		=	test.c

OBJ		=	$(SRC:.c=.o)

LDFLAGS	=	-lft -L./../libft/

CFLAGS	=	-Wall -Wextra -I./../libft/includes/ -g3 

$(NAME): all

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -L./../libft/ -lft

lib:
	make -C ../libft/
	make

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
