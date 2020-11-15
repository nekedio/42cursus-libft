/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:31:52 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/15 17:12:24 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*result;
	size_t			i;
	size_t			j;
	unsigned int	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start > str_len)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	if (str_len < len + start)
		return (NULL);
	i = 0;
	j = start;
	while (str[i] != '\0' && str_len > j && i < len)
	{
		result[i] = str[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
