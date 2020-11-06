/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:09:36 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/06 21:32:47 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			genstr(char *dst, char *srt, unsigned int *num)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = *num;
	while (srt[i])
	{
		dst[j] = srt[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	*num = j;
}

char				*ft_strjoin(char const *str1, char const *str2)
{
	unsigned int	sum_str;
	char			*result;
	unsigned int	i;
	char			*ft_str1;
	char			*ft_str2;

	
	ft_str1 = (char *)str1;
	ft_str2 = (char *)str2;
	sum_str = ft_strlen(str1) + ft_strlen(str2);
	result = (char *)malloc(sizeof(result) * sum_str + 1);
	if (!result || !str1 || !str2)
		return (NULL);
	i = 0;
	genstr(result, ft_str1, &i);
	genstr(result, ft_str2, &i);
	return (result);
}
