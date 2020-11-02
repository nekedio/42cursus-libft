files = libft.h\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c

lib = libft.h

gcr:
	gcc $(lib) *.c
	./a.out

gcc:
	gcc -Wall -Werror -Wextra $(lib) *.c

run:
	./a.out

gccr: gcc run

norm:
	norminette -R CheckForbiddenSourceHeader $(files)
