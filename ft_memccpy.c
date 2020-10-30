/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:47:47 by dxenophi          #+#    #+#             */
/*   Updated: 2020/10/30 18:19:23 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int symbol,
		size_t size)
{
	unsigned char	*ft_dst;
	unsigned char	*ft_src;
	size_t			i;

	ft_dst = (unsigned char *)dst;
	ft_src = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		*ft_dst++ = *ft_src++;
		if (*ft_src - 1 == symbol)
		{
			return (ft_dst);
		}
		i++;
	}
	return (NULL);
}
