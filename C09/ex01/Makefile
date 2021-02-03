CC =  gcc
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJ = ${SRC=.c =.o}
RM =  rm -f
LCREAT  = ar -rc
FLAGS = -Wall -Wextra -Werror

${CC} -c ${FLAGS} ${SRC} -Iincludes

libft.a: ${OBJ}
  ${LCREAT} libft.a ${OBJ}
  ranlib libft.a
  
  

clean:
  rm -f *.o
