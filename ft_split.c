/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:03:19 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/19 20:18:13 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		search_first_occ(char const *str, char symbol,
		int num_word)
{
	unsigned int		i;
	int					counter;
	int					is_word;

	counter = 0;
	is_word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == symbol)
		{
			is_word = 0;
		}
		if (str[i] != symbol && is_word == 0)
		{
			is_word = 1;
			counter++;
		}
		if (num_word == counter)
			return (i);
		i++;
	}
	return (i);
}

static unsigned int		search_last_occ(char const *str, char symbol,
		int num_word)
{
	unsigned int		i;
	int					counter;
	int					is_word;

	counter = 0;
	is_word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == symbol)
		{
			is_word = 0;
		}
		if (str[i] != symbol && is_word == 0)
		{
			is_word = 1;
			counter++;
		}
		if (num_word == counter && is_word == 0)
			return (i - 1);
		i++;
	}
	return (i);
}

static char				*get_word(char const *str, char const symbol,
		int num_word)
{
	char				*result;
	unsigned int		first_occ;
	unsigned int		last_occ;
	unsigned int		i;

	if (!str)
		return (NULL);
	if (ft_strlen(str) == 0)
	{
		result = (char *)malloc(sizeof(*result) * 1);
		return (result);
	}
	first_occ = search_first_occ(str, symbol, num_word);
	last_occ = search_last_occ(str, symbol, num_word);
	result = (char *)malloc(sizeof(*result) * (last_occ - first_occ + 2));
	if (!result)
		return (NULL);
	i = 0;
	while (first_occ <= last_occ)
	{
		result[i++] = str[first_occ++];
	}
	result[i] = '\0';
	return (result);
}

static int				count_words(char const *str, char chr)
{
	int					i;
	int					counter;
	int					is_word;

	i = 0;
	counter = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] == chr)
		{
			is_word = 0;
		}
		if (str[i] != chr && is_word == 0)
		{
			is_word = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}

char					**ft_split(char const *str, char chr)
{
	char				**result;
	int					c_words;
	int					i;

	if (!str)
		return (NULL);
	c_words = count_words(str, chr);
	result = (char**)malloc((c_words + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	i = 0;
	while (i < c_words)
	{
		result[i] = get_word(str, chr, i + 1);
		if (!result[i])
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
