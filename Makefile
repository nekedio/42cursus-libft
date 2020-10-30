files = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

gcr:
	gcc *.c
	./a.out

gcc:
	gcc -Wall -Werror -Wextra *.c

run:
	./a.out

gccr:
	gcc -Wall -Werror -Wextra *.c
	./a.out

norm:
	norminette -R CheckForbiddenSourceHeader $(files)
