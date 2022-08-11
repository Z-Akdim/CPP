NAME = Uviolence

LIB = Uviolence.a

SRC = main.cpp Weapon.cpp HumanA.cpp  HumanB.cpp

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp \

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	@ar rcs $(LIB) $(OBJ)
	@clang++  $(FLAGS) $(LIB) -o $(NAME)

%.o: %.cpp $(HEADERS)
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all
