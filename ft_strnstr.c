/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:03:51 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/05 19:39:10 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *large_str, const char *small_str,
		size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ft_large_str;

	ft_large_str = (char *)large_str;
	if (!large_str || !small_str)
		return (NULL);
	i = 0;
	while (ft_large_str[i] && i < len)
	{
		k = i;
		j = 0;
		while ((ft_large_str[k] == small_str[j]) && ft_large_str[k] && k < len)
		{
			j++;
			k++;
		}
		if (!small_str[j])
			return (ft_large_str + i);
		i++;
	}
	return (NULL);
}
