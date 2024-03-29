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
		ft_split.c
	
src_b = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

lib = libft.h

obj = ${src:.c=.o}

obj_b = ${src_b:.c=.o}

flags = -Wall -Wextra -Werror




all:	${name} 

${name}:	${obj}
	ar rc ${name} ${obj}
	ranlib ${name}

.c.o:
	gcc ${flags} -I/${lib} -c $< -o ${<:.c=.o}

clean:
	rm -f ${obj} ${obj_b}

fclean: clean
	rm -f ${name}

re: fclean all

bonus:	${obj} ${obj_b}
	ar rc ${name} ${obj} ${obj_b}




gcr:
	@gcc ${lib} ${src} ${src_b} main.c
	@./a.out

gcc:
	@gcc ${flags} ${lib} ${src} ${src_b} main.c

run:
	@./a.out

gccr: gcc run

norm:
	norminette -R CheckForbiddenSourceHeader ${src} ${src_b} ${lib}

mc:	fclean
	@rm -f main.o
	@rm -f a.out	
	@rm -f main.o
	@rm -f libft.h.gch


.PHONY: clean fclean all re bonus
