NAME := libftprintf.a
RM := rm -f
CC := cc
CFLAGS := -Wall -Werror -Wextra
CSRC := ft_printf.c ft_output.c utils/ft_strlen.c ft_write_dig.c \
		ft_format_parse.c ft_write_hex.c utils/ft_strchr.c
OSRC := $(CSRC:%.c=%.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
utils/%.o: utils/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OSRC)
	ar -rcs $(NAME) $(OSRC)
all: $(NAME)
bonus: all
clean:
	$(RM) $(OSRC)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re all bonus