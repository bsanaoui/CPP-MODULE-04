NAME = Materia

CC = clang++ -g #-fsanitize=address
FLAGS = -Werror -Wextra -Wall 

SRC = src/main.cpp src/Cure.cpp src/Ice.cpp src/AMateria.cpp src/Character.cpp src/MateriaSource.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all
