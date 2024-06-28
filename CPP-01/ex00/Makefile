# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 17:20:23 by vruiz-go          #+#    #+#              #
#    Updated: 2024/06/28 17:54:57 by vruiz-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	COLOURS	#

GREEN = \033[0:32m
COLOR_OFF = \033[0m

#	VARIABLES	#

NAME = zombie

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

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