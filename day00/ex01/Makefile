
NAME = phonebook
CC = g++
FLAGS = -Wall -Wextra -Werror
SRCS = contact.class.cpp main.cpp phonebook.class.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re: fclean all
