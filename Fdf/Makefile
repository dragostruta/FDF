# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdragos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/10 13:38:47 by tdragos           #+#    #+#              #
#    Updated: 2018/02/10 13:38:49 by tdragos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC = *.c */*.c
OBJ = *.o
INC = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -L ./includes/ -lmlx -framework OpenGL -framework AppKit
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
