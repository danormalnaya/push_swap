NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC =	fast_sort.c from_libft.c function.c init_stack.c \
	long_sort.c push_swap.c max_min_index.c parser.c rotate_operations.c swap_operations.c work_arr.c utils.c ft_itoa.c

OBJ = $(SRC: .c=.o)

.PHONY: all clen fclean re 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "DONE push_swap! \n\n"

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(NAME)

re:	fclean all
