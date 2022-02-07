NAME 			=	diamondTrap
COMPILE			=	clang++ -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98
SRC 			=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
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
