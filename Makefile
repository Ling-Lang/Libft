NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I .

SRC = 	src/libft/ft_atoi.c \
		src/libft/ft_calloc.c \
		src/libft/ft_isalnum.c \
		src/libft/ft_isalpha.c \
		src/libft/ft_isascii.c \
		src/libft/ft_isdigit.c \
		src/libft/ft_isprint.c \
		src/libft/ft_itoa.c \
		src/libft/ft_memchr.c \
		src/libft/ft_memcmp.c \
		src/libft/ft_memcpy.c \
		src/libft/ft_memmove.c \
		src/libft/ft_memset.c \
		src/libft/ft_putchar_fd.c \
		src/libft/ft_putendl_fd.c \
		src/libft/ft_putnbr_fd.c \
		src/libft/ft_putstr_fd.c \
		src/libft/ft_split.c \
		src/libft/ft_strchr.c \
		src/libft/ft_strdup.c \
		src/libft/ft_striteri.c \
		src/libft/ft_strjoin.c \
		src/libft/ft_strlcat.c \
		src/libft/ft_strlcpy.c \
		src/libft/ft_strlen.c \
		src/libft/ft_strmapi.c \
		src/libft/ft_strncmp.c \
		src/libft/ft_strnstr.c \
		src/libft/ft_strrchr.c \
		src/libft/ft_strtrim.c \
		src/libft/ft_substr.c \
		src/libft/ft_tolower.c \
		src/libft/ft_toupper.c \
		src/libft/ft_strcmp.c \
		src/libft/ft_strncpy.c

BONUS = src/libft/ft_lstadd_back_bonus.c \
		src/libft/ft_lstadd_front_bonus.c \
		src/libft/ft_lstclear_bonus.c \
		src/libft/ft_lstdelone_bonus.c \
		src/libft/ft_lstiter_bonus.c \
		src/libft/ft_lstlast_bonus.c \
		src/libft/ft_lstmap_bonus.c \
		src/libft/ft_lstnew_bonus.c \
		src/libft/ft_lstsize_bonus.c

PRINTF = 	src/printf/ft_iutils.c \
			src/printf/ft_printf.c \
			src/printf/ft_printf_utils.c \
			src/printf/ft_printf_utils_2.c

GNL = 		src/gnl/get_next_line.c \
			src/gnl/get_next_line_utils.c

OBJ = $(patsubst %.c,obj/%.o,$(SRC))
BONUSOBJ = $(patsubst %.c,obj/%.o,$(BONUS))
PRINTFOBJ = $(patsubst %.c,obj/%.o,$(PRINTF))
GNLOBJ = $(patsubst %.c,obj/%.o,$(GNL))

GREEN = \033[0;32m
YELLOW = \033[1;33m
RESET = \033[0m


$(NAME): $(OBJ) $(PRINTFOBJ) $(BONUSOBJ) $(GNLOBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ) $(BONUSOBJ) $(PRINTFOBJ) $(GNLOBJ)
	@echo "$(GREEN) Compiling $@ to library$(RESET)"

obj/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $@ $(CFLAGS)

bonus: $(BONUSOBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^
	@echo "$(GREEN) Compiling bonus$(RESET)"

printf: $(PRINTFOBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^
	@echo "$(GREEN) Compiling ft_printf$(RESET)"

gnl: $(GNLOBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^
	@echo "$(GREEN) Compiling get_next_line$(RESET)"

clean:
	@$(RM) -rf obj
	@echo "$(YELLOW)Cleaning object files$(RESET)"

fclean: clean
	@$(RM) ${NAME}
	@echo "$(YELLOW) Cleaning library$(RESET)"

re: fclean all

all: $(NAME) bonus printf gnl

.PHONY: all clean fclean re bonus
