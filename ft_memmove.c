/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:16:04 by dxenophi          #+#    #+#             */
/*   Updated: 2020/10/30 18:56:55 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *ft_dst;
    char *ft_src;
    size_t i;

    ft_src = (char *)src;
    ft_dst = (char *)dst;
    i = 0;
    if (ft_dst > ft_src)
    {
        while (i < len)
        {
            len--;
            ft_dst[len] = ft_src[len];
        }

    }
    else
    {
        while (i < len)
        {
            ft_dst[i] = ft_src[i];
            i++;
        }
    }

    return (ft_dst);
}
