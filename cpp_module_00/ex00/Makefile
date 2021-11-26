# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/11/24 22:34:39 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CC = clang++

FLAG = -Wall -Wextra -Werror

${NAME}:
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re