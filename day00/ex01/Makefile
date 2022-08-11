# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 13:26:55 by zakdim            #+#    #+#              #
#    Updated: 2021/08/29 15:25:22 by zakdim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyPhonebook

LIB = MyPhonebook.a

WFLAG = -std=c++98 -Wall -Werror -Wextra

SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)
HEADERS = Contact.hpp PhoneBook.hpp

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