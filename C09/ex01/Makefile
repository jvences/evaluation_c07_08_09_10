SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
CLIB	= ar rc
NAME	= libft.a
RLIB	= ranlib


all.o: ${OBJS} ft.h
	${CC} ${CFLAGS} ${SRCS} -c -Iincludes

