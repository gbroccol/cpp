# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/05 15:25:38 by gbroccol          #+#    #+#              #
#    Updated: 2021/02/05 16:46:07 by gbroccol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		convert

CC =		clang++

FLAGS =		-Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp Type.cpp

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
re: fclean all

.PHONY: all clean fclean re
