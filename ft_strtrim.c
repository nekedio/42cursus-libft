/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:33:23 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/07 20:06:31 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				in_array(char const *array, char symbol)
{
	int					i;

	i = 0;
	while (array[i])
	{
		if (array[i] == symbol)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static unsigned int		search_first_occ(char const *str, char const *set)
{
	unsigned int		i;

	i = 0;
	while (str[i] && in_array(set, str[i]))
	{
		i++;
	}
	return (i);
}

static unsigned int		search_last_occ(char const *str, char const *set)
{
	unsigned int		i;

	i = ft_strlen(str) - 1;
	while (str[i] && in_array(set, str[i]))
	{
		i--;
	}
	return (i);
}

char					*ft_strtrim(char const *str, char const *set)
{
	char				*result;
	unsigned int		first_occ;
	unsigned int		last_occ;
	unsigned int		len_result;
	unsigned int		i;

	first_occ = search_first_occ(str, set);
	last_occ = search_last_occ(str, set);
	len_result = last_occ - first_occ + 1;
	result = (char *)malloc(sizeof(result) * (len_result) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (first_occ <= last_occ)
	{
		result[i] = str[first_occ];
		i++;
		first_occ++;
	}
	result[i] = '\0';
	return (result);
}
