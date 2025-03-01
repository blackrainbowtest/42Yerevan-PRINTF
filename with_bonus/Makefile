NAME := libftprintf.a

RM := rm -f

CC := cc

CFLAGS := -Wall -Werror -Wextra

# C sources
CSRC := ft_printf.c ft_write_chr.c ft_write_dig.c ft_write_ptr.c ft_write_str.c \
        ft_format_parse.c ft_utils.c ft_write_dig_unsigned.c \
        utils/ft_bzero.c utils/ft_itoa.c utils/ft_strlen.c

# Replace .c to .o (with correct paths)
OSRC := $(CSRC:%.c=%.o)

# Rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

utils/%.o: utils/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OSRC)
	ar -rcs $(NAME) $(OSRC)

# Base target
all: $(NAME)

# No special bonus implementation
bonus: all

# Clean object files
clean:
	$(RM) $(OSRC)

# Full clean (including library file)
fclean: clean
	$(RM) $(NAME)

# Recompile everything
re: fclean all

.PHONY: clean fclean re all bonus
