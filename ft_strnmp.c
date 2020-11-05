
#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t i;
	unsigned char *ft_str1;
	unsigned char *ft_str2;

	ft_str1 = (unsigned char *)str1;
	ft_str2 = (unsigned char *)str2;
	i = 0;
	while(ft_str1[i] && ft_str2[i] && i < len - 1)
	{
		i++;
	}
	return (ft_str1[i] - ft_str2[i]);
}

