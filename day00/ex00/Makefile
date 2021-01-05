# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/05 20:30:06 by gbroccol          #+#    #+#              #
#    Updated: 2021/01/05 20:30:07 by gbroccol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

CC =		clang++

FLAGS =		-Wall -Werror -Wextra -std=c++98

SRCS =		megaphone.cpp

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
