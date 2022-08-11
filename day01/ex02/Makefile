# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 18:18:20 by zakdim            #+#    #+#              #
#    Updated: 2021/09/01 11:43:57 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

COMPILER = clang++

WFLAG = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all