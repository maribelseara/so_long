NAME = so_long
CFLAGS = -Wall -Werror -Wextra
AR = ar src
LIBFT = ./libft/
LIBRARY = ./libft/libft.a
OBJ_DIR = ./obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))
SRC = 

$(OBJ_DIR)%.o: %.c Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -MMD -I./ $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBRARY) -I./ -o $@

-include $(DEPS)

.PHONY : clean fclean re all

clean : 
	@make clean -C libft
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) $(LIBRARY)

re: fclean all
