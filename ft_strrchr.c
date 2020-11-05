/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:26:51 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/03 18:01:08 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int chr)
{
	char	*ft_str;
	size_t	len_str;

	ft_str = (char *)str;
	len_str = ft_strlen(ft_str);
	//printf("%ld", len_str);
	while (len_str > 0)
	{
		//printf("!");
		if (ft_str[len_str] == chr)
			return (ft_str + len_str);
		len_str--;
	}
	return (NULL);
}
