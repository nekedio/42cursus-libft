/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:29:28 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/23 17:08:06 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ft_lst;
	t_list *temp;

	ft_lst = *lst;
	while (ft_lst)
	{
		temp = ft_lst->next;
		if (del != NULL)
			del(ft_lst->content);
		free(ft_lst);
		ft_lst = temp;
	}
	*lst = NULL;
}
