/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:09:36 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/11 18:54:53 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*genstr(char *dst, char const *srt, unsigned int *counter)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = *counter;
	while (srt[i])
	{
		dst[j] = srt[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	*counter = j;
	return (dst);
}

char				*ft_strjoin(char const *str1, char const *str2)
{
	unsigned int	sum_str;
	char			*result;
	unsigned int	counter;

	if (!str1 || !str2)
		return (NULL);
	sum_str = ft_strlen(str1) + ft_strlen(str2);
	result = (char *)malloc(sizeof(result) * sum_str + 1);
	if (!result || !str1 || !str2)
		return (NULL);
	counter = 0;
	result = genstr(result, str1, &counter);
	result = genstr(result, str2, &counter);
	return (result);
}
