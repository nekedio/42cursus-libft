/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:31:52 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/06 19:09:15 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*result;
	size_t			i;
	size_t			j;
	unsigned int	str_len;

	str_len = ft_strlen(str);
	result = (char *)malloc(len * sizeof(result) + 1);
	if (!result)
		return (NULL);
	if (len == 0 || str_len < len + start)
		return (NULL);
	i = 0;
	j = start;
	while (i < len)
	{
		result[i] = str[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
