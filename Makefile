NAME = push_swap
SRCS = error_cont.c libft_func.c push_ab.c push_swap_utils.c rotate_func.c swap_func.c libft_func2.c sort.c sort_for_short.c push_swap_main.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o push_swap $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf push_swap

re: fclean all

.PHONY: all clean fclean re
