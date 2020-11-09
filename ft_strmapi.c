#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;

	result = (char *)malloc(sizeof(result) * ft_strlen(str) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';	
	return (result);
}
