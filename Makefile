# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 12:36:49 by tmashigo          #+#    #+#              #
#    Updated: 2018/08/26 09:21:12 by tmashigo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

OBJ = ft_list_items.a

MAIN = main.c\

SRC =   add_args.c\
        ft_itoa.c\
        list_items.c\
        ft_memcpy.c\
        ft_putchar.c\
        ft_putchar_fd.c\
        ft_putendl.c\
        ft_putnbr.c\
        ft_putnbr_fd.c\
        ft_putstr.c\
        ft_strcmp.c\
        ft_strjoin.c\
        ft_strlen.c\
        ft_strnew.c\
		main.c\
		ft_memalloc.c\
		ft_bzero.c\
		ft_memset.c\

OSRC =  add_args.o\
        ft_itoa.o\
        list_items.o\
        ft_memcpy.o\
        ft_putchar.o\
        ft_putchar_fd.o\
        ft_putendl.o\
        ft_putnbr.o\
        ft_putnbr_fd.o\
        ft_putstr.o\
        ft_strcmp.o\
        ft_strjoin.o\
        ft_strlen.o\
        ft_strnew.o\
        main.o\
		ft_memalloc.o\
		ft_bzero.o\
		ft_memset.o\

FLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = ft_list_items.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o ft_ls $(MAIN) $(OBJ)

$(OBJ):$(OSRC)
	ar rc $(OBJ) $(OSRC)

$(OSRC):
		$(CC) $(FLAGS) -c $(SRC)
clean:
		rm $(OSRC)
fclean: clean
	rm ft_ls
	rm -f ft_list_items.a
re: fclean all
