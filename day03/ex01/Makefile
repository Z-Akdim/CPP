# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 09:38:58 by zakdim            #+#    #+#              #
#    Updated: 2021/09/29 15:11:09 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp

HDR = ClapTrap.hpp ScavTrap.hpp

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