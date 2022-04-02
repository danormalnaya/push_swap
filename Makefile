NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJDIR = obj
SRCDIR = src

HEADER = push_swap.h

SRC =	$(SRCDIR)/fast_sort.c \
		$(SRCDIR)/function.c \
		$(SRCDIR)/init_stack.c \
		$(SRCDIR)/long_sort.c \
		$(SRCDIR)/main.c \
		$(SRCDIR)/max_min_index.c \
		$(SRCDIR)/parser.c \
		$(SRCDIR)/rotate_operations.c \
		$(SRCDIR)/swap_operations.c \
		$(SRCDIR)/utils.c \
		$(SRCDIR)/work_arr.c \

OBJ = $(addprefix $(OBJDIR)/, $(SRC: .c=.o))

.PHONY: all clen fclean re 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "DONE push_swap! \n\n"

$(OBJDIR)/$(SRCDIR)/%.o: 	$(SRCDIR)/%.c $(HEADER)
				@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@MKDIR $@ $@/$(SRCDIR)

$(OBJ): | $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean:
	@rm -rf $(NAME)

re:	fclean all
