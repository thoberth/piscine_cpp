# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 14:07:03 by thoberth          #+#    #+#              #
#    Updated: 2021/11/24 21:51:31 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRCS = $(wildcard *.cpp)

HDR = PhonebookClass.hpp

CC = clang++

FLAG = -Wall -Wextra -Werror

${NAME}:
	${CC} -o $@ ${SRCS} ${FLAG}

all: ${NAME}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re