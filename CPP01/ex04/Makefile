# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 18:54:36 by gchinaul          #+#    #+#              #
#    Updated: 2025/07/07 18:54:40 by gchinaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

OBJ_DIR = objs/
SRC = main.cpp
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