# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/17 17:29:25 by gbroccol          #+#    #+#              #
#    Updated: 2021/01/17 17:29:25 by gbroccol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRCS = 	./main.cpp

INCLUDES = ./

FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

%.o: %.c
	clang++ $(FLAGS) -I $(INCLUDES) -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)
	
clean:
	/bin/rm -f $(OBJS)
	
fclean: clean
	/bin/rm -f $(NAME)

test: all
	./replace "test" "HAPPY" "SAD"

re: fclean all
