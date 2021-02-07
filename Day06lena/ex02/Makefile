NAME = base

SRCS = main.cpp A.cpp B.cpp C.cpp Base.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

A.o: A.hpp
B.o: B.hpp 
C.o: C.hpp
Base.o: Base.hpp

$(NAME): $(OBJS) $(HEADER)
	clang++ $(OBJS) -Wall -Wextra -g -Werror -std=c++98 -o $(NAME)

$(OBJS): %.o:%.cpp 
	clang++ $(FLAGS) -c -Wall -Wextra -g -Werror $< -o $@

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all