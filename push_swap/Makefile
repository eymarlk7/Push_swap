NAME = push_swap
L_DIR = ./libft
LIBFT = $(L_DIR)/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	./srcs/push_swap.c \
	./srcs/ft_free.c \
	./srcs/ft_stack.c \
	./srcs/ft_print_error.c \
	./srcs/validations/ft_atoi2.c \
	./srcs/validations/ft_check_dup.c \
	./srcs/validations/ft_receive_args.c \
	./srcs/validations/ft_check_order_stack.c \
	./srcs/rules/operations.c \
	./srcs/rules/operations2.c \
	./srcs/rules/operations3.c \
	./srcs/algoritm/cases_ab.c \
	./srcs/algoritm/applies_ab.c \
	./srcs/algoritm/ft_sort_stack.c \
	./srcs/algoritm/ft_stack_utils.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(MAKE) -C $(L_DIR)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LIBFT)

clean:
	rm -f $(OBJ)
	@$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	@$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re