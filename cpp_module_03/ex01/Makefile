# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/12/20 13:12:21 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

HDR = ClapTrap.hpp ScavTrap.hpp

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

${NAME}: $(SRC) $(HDR)
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re
