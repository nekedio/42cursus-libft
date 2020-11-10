/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:06:31 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/10 18:13:56 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mod(int num)
{
	if (num < 0)
		return (num * (-1));
	return (num);
}

static int	numlen(int num)
{
	int		res;
	int		counter;

	num = mod(num);
	if (num == 0)
		return (1);
	res = num;
	counter = 0;
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter);
}

void		ft_putnbr_fd(int num, int fd)
{
	int		chr;

	if (num == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (numlen(num) > 1)
	{
		ft_putnbr_fd((num - num % 10) / 10, fd);
	}
	if (num < 0)
	{
		if (numlen(num) == 1)
		{
			ft_putchar_fd('-', fd);
		}
		num = mod(num);
	}
	chr = num % 10 + '0';
	ft_putchar_fd(chr, fd);
}
