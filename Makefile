NAME = so_long
CFLAGS = -Wall -Werror -Wextra
AR = ar src
LIBFT = ./libft/

LIBRARIES = ./libft/libft.a ./mlx/libmlx.a
OBJ_DIR = ./obj/
MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))
SRC = main.c

$(OBJ_DIR)%.o: %.c Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -MMD -I./ -Imlx $< -o $@

all: $(NAME)

$(NAME) : runlibs $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBRARIES) -I./ $(MLX_FLAGS) -o $@

-include $(DEPS)

.PHONY : clean fclean re allv runlibft

runlibs:
	@make -C $(LIBFT)
	@make -C mlx
clean : 
	@make clean -C libft
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) $(LIBRARY)

re: fclean all
