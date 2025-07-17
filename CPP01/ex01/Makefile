# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/06 17:51:11 by gchinaul          #+#    #+#              #
#    Updated: 2025/07/07 20:04:11 by gchinaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

OBJ_DIR = objs/
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
OBJ := $(SRC:%.cpp=%.o)
COMPILE = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $@

$(OBJ_DIR)%.o: %.cpp
	$(COMPILE) $(FLAGS) $< -c -o $@

clean:
	rm -f $(OBJS)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)