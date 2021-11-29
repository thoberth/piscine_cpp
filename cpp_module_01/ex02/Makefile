# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 13:50:20 by thoberth          #+#    #+#              #
#    Updated: 2021/11/29 16:21:50 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.cpp)

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Brain

${NAME} :
	${CC} -o $@ ${SRC} ${FLAG}

all : ${NAME}

fclean :
	${RM} ${NAME}

re : fclean all

.PHONY : all fclean re