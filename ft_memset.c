/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:51:12 by dxenophi          #+#    #+#             */
/*   Updated: 2020/10/29 15:21:10 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *arr, int symbol, size_t size)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = arr;
	while (i < size)
	{
		result[i] = symbol;
		i++;
	}
	return (result);
}
