# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea_@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 07:16:50 by wcorrea-          #+#    #+#              #
#    Updated: 2023/02/20 10:02:34 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# This script compiles the source files in object files
# and groups them in a libft.a static library
# This library can be used in other projects in C
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
