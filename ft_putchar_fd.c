#include "libft.h"

void ft_putchar_fd(char chr, int fd)
{
	write(fd, &chr, 1);
}
