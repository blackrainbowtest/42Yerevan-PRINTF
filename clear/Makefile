# Define color codes
RED    := \033[31m
GREEN  := \033[32m
YELLOW := \033[33m
BLUE   := \033[34m
RESET  := \033[0m

NAME := libftprintf.a

RM := rm -f

CC := cc

DEBUG ?= 0

# Ստուգել, Անհրաժեշտ է արդյոք ծածկել արտատպումը
HIDE := $(if $(filter 0,$(DEBUG)),@,)

CFLAGS := -Wall -Werror -Wextra

# C sources
CSRC := ft_printf.c ft_output.c utils/ft_strlen.c ft_write_dig.c \
		ft_format_parse.c ft_write_hex.c utils/ft_strchr.c

# Replace .c to .o (with correct paths)
OSRC := $(CSRC:%.c=%.o)

# Rule to compile .c to .o
%.o: %.c
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

utils/%.o: utils/%.c
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OSRC)
	$(HIDE)ar -rcs $(NAME) $(OSRC)

# Base target
all: $(NAME)

# No special bonus implementation just call all again
bonus: all

# Clean object files
clean:
	$(HIDE)$(RM) $(OSRC)

# Full clean (including library file)
fclean: clean
	$(HIDE)$(RM) $(NAME)

# Recompile everything
re: fclean all

test: re
	$(HIDE)echo -n "$(YELLOW)Start compiling: ["
	$(HIDE)$(CC) main.c libftprintf.a -o my_program
	$(HIDE)echo "$(GREEN)OK$(RESET)]"
#	$(HIDE)make fclean
	$(HIDE)echo -n "$(BLUE)Running tests: ["
	$(HIDE)for i in $$(seq 1 20); do \
	    echo -n "$(GREEN)#$(RESET)"; \
	    sleep 0.05; \
	done
	$(HIDE)echo "] $(GREEN)Done!$(RESET)"
	$(HIDE)./my_program

norm:
	$(HIDE)echo "$(RED)Start norm without tmp files ...$(RESET)"
	$(HIDE)norminette $(CSRC)
	$(HIDE)echo "$(GREEN)DONE ...$(RESET)"

.PHONY: clean fclean re all bonus