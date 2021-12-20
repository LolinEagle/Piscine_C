SRCS	= ./src/main.c	\
			./src/atoi.c		\
			./src/ft_minisplit.c		\
			./src/ft_split.c		\
			./src/ft_split_number.c		\
			./src/ft_util.c		\
			./src/parser.c	\
			./src/atoa.c	\
			./src/print_number.c	\
			./src/put_3_number.c	\
			./src/itoa.c

OBJS	= ${SRCS:.c=.o}
INCS	= include
NAME	= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}
