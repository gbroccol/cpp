# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/07 17:01:21 by gbroccol          #+#    #+#              #
#    Updated: 2021/02/07 17:03:58 by gbroccol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		serialization

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
re: fclean all

.PHONY: all clean fclean re
