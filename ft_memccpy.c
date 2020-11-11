/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:47:47 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/11 16:00:08 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int symbol, size_t size)
{
	unsigned char	*ft_dst;
	unsigned char	*ft_src;
	size_t			i;

	ft_dst = (unsigned char *)dst;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		ft_dst[i] = ft_src[i];
		if (ft_src[i] == (unsigned char)symbol)
		{
			return (ft_dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
