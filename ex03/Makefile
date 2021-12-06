NAME = Materia

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = src/main.cpp src/ICharacter.cpp src/AMateria.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) -I $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all