# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 09:55:48 by zakdim            #+#    #+#              #
#    Updated: 2021/10/03 09:55:49 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp

HDR =	Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		WrongCat.hpp \
		WrongAnimal.hpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)