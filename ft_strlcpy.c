/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:56:14 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/02 19:57:02 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*ft_dst;
	char	*ft_src;
	int		len;

	ft_src = (char *)src;
	len = ft_strlen(ft_src);
	ft_dst = ft_memcpy(dst, ft_src, dstsize - 1);
	*(ft_dst + len) = '*';
	return (len);
}
