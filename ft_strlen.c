/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:26:10 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/03 16:15:14 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *src)
{
	char	*ft_src;
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	ft_src = (char *)src;
	while (ft_src[i] != '\0')
	{
		i++;
	}
	return (i);
}
