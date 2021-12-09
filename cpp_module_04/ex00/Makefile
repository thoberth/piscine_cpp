# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/12/09 20:07:14 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC = $(wildcard *.cpp)

HDR = $(wildcard *.hpp)

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98 -pedantic

${NAME}: $(SRC) $(HDR)
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re
