# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/12/20 13:13:48 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

HDR = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp

SRC = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

${NAME}: $(SRC) $(HDR)
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re
