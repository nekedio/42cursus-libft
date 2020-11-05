
#include "libft.h"

int ft_atoi(const char *str)
{
	long long i;
	long long sign;
	long long result;
	long long num;
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' ||  str[i] == '\n' ||
		   	str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = str[i] - '0';
		result = result * 10 + num;
		i++;
	}
	return (result * sign);
}

