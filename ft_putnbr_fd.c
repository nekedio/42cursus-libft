#include "libft.h"

void ft_putnbr_fd(int num, int fd)
{
	char *str;
	str = ft_itoa(num);
	ft_putstr_fd(str, fd);
}

