/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:58:48 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/10 18:03:04 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			mod(int num)
{
	if (num < 0)
		return (num * (-1));
	return (num);
}

static int			numlen(int num)
{
	int				res;
	int				counter;
	int				byte_sign;

	if (num == 0)
		return (1);
	byte_sign = 0;
	if (num < 0)
	{
		num = num * (-1);
		byte_sign = 1;
	}
	res = num;
	counter = 0;
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter + byte_sign);
}

static char			*fill_str(char *str, int num)
{
	int				len;
	int				i;
	char			chr;
	int				mod_num;

	len = numlen(num);
	mod_num = mod(num);
	i = 0;
	while (i < len)
	{
		chr = mod_num % 10 + '0';
		mod_num = (mod_num - mod_num % 10) / 10;
		str[i] = chr;
		i++;
	}
	if (num < 0)
	{
		str[len - 1] = '-';
	}
	return (str);
}

static char			*str_revers(char *str, int len)
{
	char			temp;
	int				i;

	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);
}

char				*ft_itoa(int num)
{
	int				len;
	char			*result;

	if (num == -2147483648)
	{
		result = (char *)malloc(sizeof(*result) * 11 + 1);
		if (!result)
			return (NULL);
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	len = numlen(num);
	result = (char *)malloc(sizeof(*result) * len + 1);
	if (!result)
		return (NULL);
	result = fill_str(result, num);
	result = str_revers(result, len);
	result[len] = '\0';
	return (result);
}
