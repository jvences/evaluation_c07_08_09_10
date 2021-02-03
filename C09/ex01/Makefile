CC =  gcc
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJ = ${SRC=.c =.o}
RM =  rm -f
FLAGS = -Wall -Wextra -Werror

libft.a: ${OBJ}
  ${gcc} -c ${FLAGS} ${SRC} ${OBJ}

clean:
  rm -f *.o
