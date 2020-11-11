/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:33:23 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/11 20:54:30 by dxenophi         ###   ########.fr       */
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
		//write(1, "*", 1);
	}
	return (i);
}

static unsigned int		search_last_occ(char const *str, char const *set)
{
	unsigned int		i;
	char p;

	i = ft_strlen(str) - 1;
	while (in_array(set, str[i]))
	{
		i--;
		p = i + '0';
		write(1, &p, 1);
	}
	printf("  %d  ", i);
	return (i);
}

char					*ft_strtrim(char const *str, char const *set)
{
	char				*result;
	unsigned int		first_occ;
	unsigned int		last_occ;
	unsigned int		len_result;
	unsigned int		i;

	
	//write(1, "*", 1);
	//set = ft_strjoin(set, " \n\t");
	if (!str || !set)
		return (NULL);
	/* if (ft_strlen(set) == 0) */
	/* { */
	/* 	#<{(| result = (char *)malloc(sizeof(*result) * (ft_strlen(str) + 1)); |)}># */
	/* 	#<{(| ft_strlcpy(result, str, ft_strlen(str) + 1); |)}># */
	/* 	#<{(| return (result); |)}># */
	/* 	//set = " \n\t"; */
	/* 	return (ft_strtrim(str, " \n\t")); */
	/* } */
		if (ft_strlen(str) == 0)
	{
		result = (char *)malloc(sizeof(*result) * 1);
		return (result);
	}
	first_occ = search_first_occ(str, set);
	last_occ = search_last_occ(str, set);
	//printf("f=%d  l=%d  ", first_occ, last_occ);
	/* if (last_occ == first_occ) */
	/* { */
	/* 	write (1, "N", 1); */
	/* 	return (NULL); */
	/* } */


	len_result = last_occ - first_occ + 1;
	
	
	result = (char *)malloc(sizeof(*result) * (len_result + 1));
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
