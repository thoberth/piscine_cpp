# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:02:08 by thoberth          #+#    #+#              #
#    Updated: 2021/12/20 13:15:37 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap

HDR = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRC = main.cpp ScavTrap.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

${NAME}: $(HDR) $(SRC)
	${CC} -o ${NAME} ${FLAG} ${SRC}

all: ${NAME}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY:	all fclean re
