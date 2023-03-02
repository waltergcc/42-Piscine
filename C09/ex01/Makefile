# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 07:35:37 by wcorrea-          #+#    #+#              #
#    Updated: 2023/02/20 10:18:42 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME recebe o do arquivo de biblioteca estática
NAME = libft.a

# SRCS has the list of font files that will be compiled
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	   srcs/ft_strcmp.c

# Objs receives the same values as SRCs only exchanges .c for .o
OBJS = ${SRCS:.c=.o}

# CC receives the type of GCC compilation
CC		= gcc

# RM receives the command to delete with the -f flag that removes without asking
RM		= rm -f

# CFLAGS receive compilation flags
CFLAGS = -Wall -Wextra -Werror

# defines a rule to compile
# -I includes that the headers are in the Include folder
# -c $ < -$ {<:. c = .O} specifies how the source file will be generated
# $(NAME): ${OBJS}generates the Library Static from Objs
# ar rcs ${NAME} ${OBJS} Creates the Static Library
.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

# When makefile is called without arguments
all:	${NAME}

# defines the rule to clean. Erases the .o files.
clean:
		${RM} ${OBJS}

# Erases the same files of Clean snd the Static Library
fclean:	clean
		${RM} ${NAME}

# clean all files and create them again
re:		fclean all

# informs MakeFile that whenever these rules are called they need to be executed
.PHONY: all clean fclean re