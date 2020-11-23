/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:13:28 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/23 14:48:27 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *src, int symbol, size_t size)
{
	unsigned char	*ft_src;
	size_t			i;

	if (!size)
		return (NULL);
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < size - 1)
	{
		if (ft_src[i] == (unsigned char)symbol)
		{
			return (ft_src + i);
		}
		i++;
	}
	return (NULL);
}
