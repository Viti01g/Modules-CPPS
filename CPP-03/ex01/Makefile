# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: VR <VR@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 12:15:03 by VR                #+#    #+#              #
#    Updated: 2024/09/17 14:09:30 by VR               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	COLOURS	#

GREEN = \033[0:32m
COLOR_OFF = \033[0m

#	VARIABLES	#

NAME = ex01

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS =  -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#	RULES	#

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)<+> $(NAME) has been created! <+>$(COLOR_OFF)"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)<-> $(NAME) cleaned successfuly! <->$(COLOR_OFF)"

re: fclean all

.PHONY: all clean fclean re
