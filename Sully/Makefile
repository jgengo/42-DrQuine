SRC_NAME = Sully.c
OBJ = $(SRC_NAME:.c=.o)
FLAGS = -Wall -Wextra -Werror
NAME = Sully

all: $(NAME)

$(NAME): $(OBJ)
	@clang $(FLAGS) $(OBJ) -o $(NAME)
	@mkdir bin/
	@cp $(NAME) bin/
clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf bin/
	
re: fclean all

.PHONY: all clean fclean
