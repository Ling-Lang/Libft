NAME = libft.a
all:
	gcc -c ft*.c -Wall -Werror -Wextra
	ar -rc libft.a *.o

clean:
	rm -rf *.o
re:
	rm -rf *.o
	rm -rf libft.a
	gcc -c ft*.c -Wall -Werror -Wextra
	ar -rc libft.a *.o
fclean:
	rm -rf *.a