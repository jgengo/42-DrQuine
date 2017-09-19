SRC_NAME = Colleen.c
OBJ = $(SRC_NAME:.c=.o)
FLAGS = -Wall -Wextra -Werror
NAME = Colleen

all: $(NAME)

$(NAME): $(OBJ)
	@clang $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean
