NAME = Brain

CC = clang++ #-g -fsanitize=address
FLAGS = -Werror -Wextra -Wall 

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all