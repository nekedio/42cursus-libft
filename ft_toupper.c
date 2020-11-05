
#include "libft.h"

int		ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		return (chr - ' ');
	return (chr);
}

