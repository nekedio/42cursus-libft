name = libft.a

src = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

lib = libft.h

obj = ${src:.c=.o}

flags = -Wall -Wextra -Werror




all:	${name} 

${name}:	${obj}
	ar rc ${name} ${obj}
	ranlib ${name}

.c.o:
	gcc ${flags} -I${lib} -c $< -o ${<:.c=.o}

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re: fclean all




gcr:
	gcc ${lib} *.c
	./a.out

gcc:
	gcc -Wall -Werror -Wextra ${lib} ${src}

run:
	./a.out

gccr: gcc run

norm:
	norminette -R CheckForbiddenSourceHeader ${src} ${lib}

mc:	fclean
	@rm -f main.o
	@rm -f a.ou	
	@rm -f main.o
	@rm -f libft.h.gch


.PHONY: clean fclean all re
