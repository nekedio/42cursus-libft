files = ft_memset.c

gcc:
	gcc -Wall -Werror -Wextra *.c

run:
	./a.out

gccr:
	gcc -Wall -Werror -Wextra *.c
	./a.out

norm:
	norminette -R CheckForbiddenSourceHeader $(files)
