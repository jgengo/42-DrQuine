# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgengo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 08:29:30 by jgengo            #+#    #+#              #
#    Updated: 2017/09/19 08:29:33 by jgengo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
