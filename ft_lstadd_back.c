/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:32:31 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/19 17:39:49 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ft_lst;

	ft_lst = *lst;
	if (!ft_lst)
	{
		*lst = new;
		return ;
	}
	while (ft_lst->next)
	{
		ft_lst = ft_lst->next;
	}
	ft_lst->next = new;
}
