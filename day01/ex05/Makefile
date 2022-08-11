# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 12:09:28 by zakdim            #+#    #+#              #
#    Updated: 2021/09/07 12:11:46 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

LIB = karen.a

SRC = main.cpp Karen.cpp

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