/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:51:12 by dxenophi          #+#    #+#             */
/*   Updated: 2020/10/30 19:27:47 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *arr, int symbol, size_t size)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)arr;
	while (i < size)
	{
		result[i] = symbol;
		i++;
	}
	return (result);
}
