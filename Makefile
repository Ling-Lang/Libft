
NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR		= ar
ARFLAGS = -rcs
INCFLAG	= -I .

MANDO = ft_*.c
BONUS = src/ft_*_bonus.c

MANDOOBJ	= $(MANDO:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)

$(NAME): $(MANDOOBJ)
	@$(AR) $(ARFLAGS) $@ $^

bonus: $(BONUSOBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o : %.c
	$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

clean:
	$(RM) $(MANDOOBJ) $(BONUSOBJ)

fclean: clean
	$(RM) ${NAME}

re: fclean all

all: $(NAME) bonus

.PHONY: all clean fclean re bonus
