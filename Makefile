# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 12:44:03 by thoberth          #+#    #+#              #
#    Updated: 2021/12/14 14:02:04 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE = 		\033[0;34m
GREEN = 	\033[0;32m
LIGHTBLUE = \033[1;34m
RED = 		\033[0;31m
YELLOW = 	\033[1;33m
ORANGE = 	\033[0;33m
MAGENTA = 	\033[0;35m
RESET = 	\033[0m

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = interface

SRCS = source

OBJS = ${SRCS:.cpp=.o}

$(NAME): ${OBJS}
	@printf "\n$(BLUE)"
	@printf "$(BLUE)Compiling files..."
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@printf "$(GREEN)[$(NAME) done][✔]$(RESET)\n"
	@printf "\n"

all: ${NAME}

clean:
	@printf "\n"
	@printf "$(RED)Erase files '.o'\n"
	${RM} ${OBJS}
	@printf "$(RESET)\n"


fclean: clean
	@printf "\n"
	@printf "$(RED)Delete executable file and libft\n"
	${RM} ${NAME}
	@printf "$(RESET)\n"

re: fclean all

.PHONY:	all clean fclean re
