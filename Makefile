NAME = push_swap

BONUS = checker

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC =	fast_sort.c \
		function.c \
		init_stack.c \
		long_sort.c \
		push_swap.c \
		max_min_index.c \
		parser.c \
		stack_a.c \
		stack_b.c \
		stack_a_b.c \
		work_arr.c \
		utils.c

SRC_BONUS = bonus_checker/checker.c \
			bonus_checker/instraction.c \
			bonus_checker/instraction2.c \
			bonus_checker/instraction3.c \
			gnl/get_next_line.c \
			gnl/get_next_line_utils.c \
			init_stack.c \
			work_arr.c \
			parser.c \
			function.c \
			max_min_index.c \
			utils.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

.PHONY: all clean fclean re libft bonus

all: libft $(NAME)

libft:
	make -C ./libft

bonus: $(BONUS)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -Llibft ./libft/libft.a -o $(NAME)
	@printf "DONE push_swap! \n\n"

$(BONUS): $(OBJ_BONUS)
	$(CC) $(FLAGS) $(OBJ_BONUS) -Llibft ./libft/libft.a -o $(BONUS)
	@printf "DONE push_swap bonus! \n\n"

%.o: %.c push_swap.h bonus_checker/bonus_checker.h libft/libft.h gnl/get_next_line.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	rm -rf $(BONUS)
	make fclean -C libft

re:	fclean all
