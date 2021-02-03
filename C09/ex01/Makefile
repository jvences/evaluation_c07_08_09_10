CC =  gcc
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJ = ${SRC:.c =.o}
INC = includes
LCREAT  = ar -rc
FLAGS = -Wall -Wextra -Werror

comp:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -Iincludes

libft.a: ${OBJ}
	${LCREAT} libft.a ${OBJ}
	ranlib libft.a

all: libft.a

clean:
    rm -f ${OBJ}
    
fclean: clean
    rm -f libft.a

.PHONY: all clean fclean re .c.o norm