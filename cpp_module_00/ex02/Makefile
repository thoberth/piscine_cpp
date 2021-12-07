# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:34:21 by thoberth          #+#    #+#              #
#    Updated: 2021/12/07 11:34:48 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRCS = $(wildcard *.cpp)

HDR = PhonebookClass.hpp

CC = clang++

FLAG = -Wall -Wextra -Werror -std=c++98

${NAME}:
	${CC} -o $@ ${SRCS} ${FLAG}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re