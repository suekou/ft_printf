SRCS =	ft_print_char.c \
		ft_print_hex.c \
		ft_print_int.c \
		ft_print_pointer.c \
		ft_print_string.c \
		ft_print_unsigned_int.c \
		ft_strlen.c \
		ft_ullitoa_base.c \
		ft_printf.c
		

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re