# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 13:50:20 by thoberth          #+#    #+#              #
#    Updated: 2021/12/09 17:25:44 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.cpp)

HDR = Fixed.hpp

CC = clang++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = fixed

${NAME} : $(SRC) $(HDR)
	${CC} -o $@ ${SRC} ${FLAG}

all : ${NAME}

fclean :
	${RM} ${NAME}

re : fclean all

.PHONY : all fclean re