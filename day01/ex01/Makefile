# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 15:28:28 by zakdim            #+#    #+#              #
#    Updated: 2021/09/04 11:00:42 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

LIB = Moar_brainz.a

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

HEADERS = Zombie.hpp

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