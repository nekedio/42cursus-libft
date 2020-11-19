/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:11:27 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/19 17:48:39 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ft_lst;

	i = 0;
	ft_lst = lst;
	while (ft_lst)
	{
		ft_lst = ft_lst->next;
		i++;
	}
	return (i);
}
