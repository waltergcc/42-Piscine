
NAME = rush-02

SRC = src/main.c src/ft_util.c src/ft_rush02.c

# Objs receives the same values as SRCs only exchanges .c for .o
OBJS = ${SRC:.c=.o}

CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

# defines a rule to compile
# -c $ < -$ {<:. c = .O} specifies how the source file will be generated
# $(NAME): ${OBJS} generates the Library Static from Objs
# ${CC} ${CFLAGS} ${OBJS} -o ${NAME} create the file ft_display_files
.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

# When makefile is called without arguments
all:	${NAME}

# defines the rule to clean. Erases the .o files.
clean:
		${RM} ${OBJS}

# Erases the same files of Clean and the rush-02
fclean: clean
		${RM} ${NAME}

# clean all files and create them again
re: fclean all

# informs MakeFile that whenever these rules are called they need to be executed
.PHONY: all clean fclean re
