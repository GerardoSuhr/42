CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_printf.a
SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

clean
		rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
