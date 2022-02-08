NAME 			=	ClapTrap
COMPILE			=	clang++ -Wall -Werror -Wextra -std=c++98
SRC 			=	main.cpp ClapTrap.cpp
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
