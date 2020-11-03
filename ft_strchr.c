/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:19:37 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/03 19:16:14 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int chr)
{
	char *ft_str;
	int i;
	
	
	ft_str = (char *)str;
	
	
	
	i = 0;	
	while (ft_str[i])
	{
		if (ft_str[i] == chr)
		{
			return (ft_str + i);
		}
		i++;
	}
	if (ft_str[i + 1] == '\n')
	{
		printf("%s", ft_str);
	}	
	
	return (NULL);
}
