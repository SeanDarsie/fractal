# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/29 15:22:15 by sdarsie           #+#    #+#              #
#    Updated: 2017/06/03 17:50:03 by sdarsie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fractol
LIBFT = ./libft/libft.a
LIB_MLX = ./minilibx_macos/libmlx.a
LIBFTINC = -L ./libft/ -lft
INC = fractal.h
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
		hook_functions.c \
		more_hooks.c \
		tam_gradient.c \


SRCS = $(addprefix $(SRC_DIR),$(FILES))

OBJ_DIR = ./obj/
OBJ_NAME = $(FILES:%.c=%.o)
OBJS = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

all: obj $(NAME)

$(NAME):  $(LIBFT) $(OBJS) $(LIB_MLX) $(INC)
	gcc -o $(NAME) $(OBJS) $(CFLAGS) $(MINILIB) $(LIBFTINC) $(FRAMEWORKS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	gcc $(CFLAGS) -o $@ -c $<  

obj:
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@make -C ./libft

$(LIB_MLX):
	make -C ./minilibx_macos

clean:
	@rm -f $(OBJS)
	@make clean -C ./libft
	@make clean -C ./minilibx_macos

fclean: clean
	@make fclean -C ./libft
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all 
