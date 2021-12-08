# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/12/08 10:35:07 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = name

SRC = $(wildcard *.cpp)

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

${NAME}:
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re
