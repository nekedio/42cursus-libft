/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:08:48 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/19 17:27:58 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ft_lst;
	t_list *ft_new;
	
	if (!lst || !f)
		return (NULL);
	ft_lst = NULL;
	while (lst)
	{
		ft_new = ft_lstnew(f(lst->content));
		if (!ft_new)
		{
			ft_lstclear(&ft_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ft_lst, ft_new);
		lst = lst->next;
	}


	return (ft_lst);
}
