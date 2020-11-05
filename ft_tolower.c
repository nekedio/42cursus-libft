
#include "libft.h"

int		ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (chr + ' ');
	return (chr);
}

