# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/17 17:29:25 by gbroccol          #+#    #+#              #
#    Updated: 2021/01/18 13:08:52 by gbroccol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		replace

CC =		clang++

FLAGS =		-Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp

OBJ =		$(SRCS:.cpp=.o)

%.o: %.cpp
			$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
			rm -rf $(OBJ)
fclean:
			rm -rf $(OBJ) $(NAME)
			rm -rf test.replace
re: fclean all

test: all
	./replace "test" "HAPPY" "SAD"

.PHONY: all clean fclean re
