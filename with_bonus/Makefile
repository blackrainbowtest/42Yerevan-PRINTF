# Define color codes
RED    := \033[31m
GREEN  := \033[32m
YELLOW := \033[33m
BLUE   := \033[34m
RESET  := \033[0m

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
	@$(CC) $(CFLAGS) -c $< -o $@

utils/%.o: utils/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OSRC)
	@echo "$(YELLOW)Making archive file ...$(RESET)"
	@ar -rcs $(NAME) $(OSRC)
	@echo "$(GREEN)Making completed ...$(RESET)"

# Base target
all: $(NAME)

# No special bonus implementation
#bonus: all

# Clean object files
clean:
	@echo "$(BLUE)Starting cleaning object files ...$(RESET)"
	@$(RM) $(OSRC)
	@echo "$(GREEN)Cleaning completed ...$(RESET)"

# Full clean (including library file)
fclean: clean
	@echo "$(BLUE)Starting cleaning archive file ...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(GREEN)Cleaning completed ...$(RESET)"

# Recompile everything
re: fclean all

test: re
	@echo "$(RED)Compailing programm ...$(RESET)"
	@cc main.c libftprintf.a -o my_program
	@echo "$(GREEN)Compailing completed ...$(RESET)"
	@make fclean
	@./my_program

norm:
	@echo "$(RED)Start norm without tmp files ...$(RESET)"
	@norminette $(CSRC)
	@echo "$(GREEN)DONE ...$(RESET)"

.PHONY: clean fclean re all bonus
