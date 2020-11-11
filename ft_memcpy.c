/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:47:15 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/11 15:13:11 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char	*ft_dst;
	unsigned char	*ft_src;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	ft_dst = (unsigned char *)dst;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		ft_dst[i] = ft_src[i];
		i++;
	}
	return (ft_dst);
}
