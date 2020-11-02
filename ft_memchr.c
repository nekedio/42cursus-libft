/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:13:28 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/02 12:15:32 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *src, int symbol, size_t size)
{
	unsigned char	*ft_src;
	size_t			i;

	ft_src = (unsigned char *)src;
	i = 0;
	while (i < size - 1)
	{
		if (*ft_src++ == symbol)
		{
			return (ft_src - 1);
		}
		i++;
	}
	return (NULL);
}
