# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duk <duk@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/25 11:30:49 by duk               #+#    #+#              #
#    Updated: 2026/08/25 12:43:03 by duk              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libft.a

CC = cc

CFLAGS = -Wall -Werro -Wextra

RM = rm -f

SRC = //write here the code names bruh, or name them like SRC and later group them with ${them name}. like SRC = ${name1} ${name2}

OBJ = ${SRC:.c=.o}

.o:.cc
	${CC} {CFLAGS}

all:	
	${NAME}

clean:
	${RM} {OBJ}

fclean: clean
	${RM} ${NAME}
	
re: fclean all

.PHONY: all clean fclean re
