
NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I .

MANDO = src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_isprint.c \
		src/ft_itoa.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_putchar_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_putstr_fd.c \
		src/ft_split.c \
		src/ft_strchr.c \
		src/ft_strdup.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c \
		src/ft_strcmp.c
BONUS = src/ft_lstadd_back_bonus.c \
		src/ft_lstadd_front_bonus.c \
		src/ft_lstclear_bonus.c \
		src/ft_lstdelone_bonus.c \
		src/ft_lstiter_bonus.c \
		src/ft_lstlast_bonus.c \
		src/ft_lstmap_bonus.c \
		src/ft_lstnew_bonus.c \
		src/ft_lstsize_bonus.c
PRINTF = src/ft_iutils.c \
		src/ft_printf.c \
		src/ft_printf_utils.c \
		src/ft_printf_utils_2.c
GNL    = 	src/gnl/get_next_line_bonus.c\
			src/gnl/get_next_line_utils_bonus.c

MANDOOBJ	= $(MANDO:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)
PRINTFOBJ = $(PRINTF:.c=.o)
GNLOBJ = $(GNL:.c=.o)


$(NAME): $(MANDOOBJ) $(PRINTFOBJ) $(GNLOBJ)
	$(AR) $(ARFLAGS) $@ $^

bonus: $(BONUSOBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

printf: $(PRINTFOBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

gnl: $(GNLOBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o : %.c
	$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

clean:
	$(RM) $(MANDOOBJ) $(BONUSOBJ) $(PRINTFOBJ) $(GNLOBJ)

fclean: clean
	$(RM) ${NAME}

re: fclean all

all: $(NAME) bonus printf gnl

.PHONY: all clean fclean re bonus
