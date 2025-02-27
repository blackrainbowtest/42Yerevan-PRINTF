NAME := libftprintf.a

RM := rm -f

CC := cc

CFLAGS := -Wall -Werror -Wextra

# C sources
CSRC := ft_printf.c ft_write_chr.c ft_write_dig.c ft_write_ptr.c ft_write_str.c \
		ft_format_parse.c

# Replace .c to .o
OSRC = $(CSRC:.c=.o)

# define rule to compile .c files to .o files using my settings here
# full compile when libft.h changed
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# define rule to create library
# full compile when Makefile changed
$(NAME): $(OSRC) Makefile
	ar -rcs $(NAME) $(OSRC)

# define base target
all: $(NAME)

# no special packets for bonus
bonus: all

# define rule to clean
clean:
	$(RM) $(OSRC)

# define rule to full clean
fclean: clean
	$(RM) $(NAME)

#rull recompile
re: fclean all

.PHONY: clean fclean re all