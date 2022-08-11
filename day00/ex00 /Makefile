# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 12:05:10 by zakdim            #+#    #+#              #
#    Updated: 2021/08/29 15:24:47 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

COMPILER = clang++

WFLAG = -std=c++98 -Wall -Werror -Wextra

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all