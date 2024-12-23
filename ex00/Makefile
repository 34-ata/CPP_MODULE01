NAME = brainz

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Zombie.cpp main.cpp

all: $(NAME)

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean $(NAME)