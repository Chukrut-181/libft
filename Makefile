NAME = libft.a
BONUS_NAME = libft_bonus.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_free_array.c ft_free_int_array.c ft_get_next_line.c ft_printf.c\
ft_printf_utils.c ft_arraylen.c ft_atof.c ft_strcmp.c

OBJS_DIR = Objects

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(addprefix $(OBJS_DIR)/, $(BONUS_SRCS:.c=.o))

GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)
	@echo "$(GREEN)-> Libft: libft.a compilation OK$(RESET)"

$(OBJS_DIR)/%.o : %.c
	@mkdir $(OBJS_DIR)
	$(CC) $(CCFLAGS) -c -o $@ $<

bonus: $(BONUS_NAME)

$(BONUS_NAME) : $(OBJS) $(BONUS_OBJS)
	@ar crs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)-> Libft: libft.a with bonuses compilation OK$(RESET)"

sani: CCFLAGS += -fsanitize=address -g3
sani: fclean all
	@echo "$(GREEN)-> (Sanitize flags added)$(RESET)"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(YELLOW)-> Libft: objects removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)-> Libft: libft.a removed$(RESET)"

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus sani