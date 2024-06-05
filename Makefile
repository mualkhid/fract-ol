# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 20:57:47 by mualkhid          #+#    #+#              #
#    Updated: 2024/06/03 20:57:48 by mualkhid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = fractol

FILES = handler.c init.c fractol.c fractal_math.c render.c str_utils.c keys.c julia.c

OBJ = $(FILES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

all :$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ)  -I./mlx -L./mlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
