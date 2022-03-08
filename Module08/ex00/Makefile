NAME 			=	easyfind
COMPILE			=	c++ -Wall -Werror -Wextra -std=c++98
SRC 			=	main.cpp
OBJS			=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	@$(COMPILE) $(SRC) -o $(NAME)

bonus: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
