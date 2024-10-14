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
	./srcs/rules/operactions.c \
	./srcs/rules/operactions2.c \
	./srcs/rules/operactions3.c \
	./srcs/rules/operactions4.c \
	./srcs/rules/mix_operactions.c \
	./srcs/algoritm/ft_stack_utils.c \
	./srcs/algoritm/ft_sort_three.c \
	./srcs/algoritm/ft_sort_stack.c

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
