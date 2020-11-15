/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:56:18 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/13 15:54:04 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*from_end(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		len--;
		dst[len] = src[len];
	}
	return (dst);
}

static char	*from_begin(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ft_dst;
	char	*ft_src;

	if (!dst && !src)
		return (NULL);
	ft_src = (char *)src;
	ft_dst = (char *)dst;
	if (ft_dst > ft_src)
	{
		ft_dst = from_end(dst, ft_src, len);
	}
	else
	{
		ft_dst = from_begin(dst, ft_src, len);
	}
	return (ft_dst);
}
