SRCS	=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	=${SRCS:.c=.o}
CC		=gcc
RLIB	=ranlib
CLIB	=ar -rc
NAME	=libft.a
DEL		=rm
INC		=includes
CFLAGS	=-Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${CLIB} ${NAME} ${OBJS}
	${RLIB} ${NAME}

comp: 
	${CC} ${CFLAGS} -c ${SRCS} -o ${OBJS} -I${INC}

clean:
	${DEL} ${OBJS}