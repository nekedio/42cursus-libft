/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:22:33 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/02 13:00:03 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *src1, const void *src2, size_t len)
{
	unsigned char	*ft_src1;
	unsigned char	*ft_src2;
	size_t			i;

	ft_src1 = (unsigned char *)src1;
	ft_src2 = (unsigned char *)src2;
	i = 0;
	while (i < len)
	{
		if (ft_src1[i] != ft_src2[i])
		{
			return (ft_src1[i] - ft_src2[i]);
		}
		i++;
	}
	return (0);
}
