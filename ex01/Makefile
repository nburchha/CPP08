CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = program

SRCS = main.cpp Span.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re