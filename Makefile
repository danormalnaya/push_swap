NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC =	fast_sort.c \
		from_libft.c \
		ft_itoa.c \
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
		utils.c \

OBJ = $(SRC: .c=.o)

all: $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "DONE push_swap! \n\n"
	
clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clen fclean re 