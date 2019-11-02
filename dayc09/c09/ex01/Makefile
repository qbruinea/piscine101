NAME = libft.a

HEADER = ./includes

SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJET = ${SRC:.c=.o}

FLAG = -Wall -Wextra -Werror

.c.o:
	gcc ${FLAG} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}: ${OBJET}
	ar rc ${NAME} ${OBJET}
	ranlib ${NAME}

all: ${NAME}

clean:
	/bin/rm -f ${OBJET}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
