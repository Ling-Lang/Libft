all:
	gcc -c ft*.c -Wall -Werror -Wextra
	ar -rc libft.a *.o

clean:
	rm -rf *.o
	rm -rf libft.a