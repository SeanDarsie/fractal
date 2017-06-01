# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/29 15:22:15 by sdarsie           #+#    #+#              #
#    Updated: 2017/05/31 16:55:20 by sdarsie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fractol
LIBFT = ./libft/libft.a
LIB_MLX = ./minilibx_macos/libmlx.a
LIBFTINC = -L ./libft/ -lft
MINILIB = -L ./minilibx_macos/ -lmlx
CFLAGS = -Wall -Wextra -Werror
FRAMEWORKS = -framework OpenGL -framework AppKit


SRC_DIR = ./src/
FILES = main.c \
		assign_nums.c \
		color.c \
		gradients.c \
		julia.c  \
		range_change.c \
		draw_fractals.c \
		rainbow.c \
		draw_julia.c \
		more_colors.c \
		christmas.c \
		pride.c \
		organize.c \


SRCS = $(addprefix $(SRC_DIR),$(FILES))

OBJ_DIR = ./obj/
OBJ_NAME = $(FILES:%.c=%.o)
OBJS = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

all: obj $(NAME)

$(NAME): $(OBJS) $(LIB_MLX) fractal.h
	gcc -o $(NAME) $(OBJS) $(CFLAGS) $(MINILIB) $(FRAMEWORKS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	gcc $(CFLAGS) -o $@ -c $<  

obj:
	@mkdir -p $(OBJ_DIR)

$(LIB_MLX):
	make -C ./minilibx_macos

clean:
	@rm -f $(OBJS)
	@make clean -C ./minilibx_macos

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all 
