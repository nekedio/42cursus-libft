/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:46:18 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/21 18:25:57 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*ft_lst;

	if (!lst)
		return (NULL);
	ft_lst = lst;
	while (ft_lst->next)
	{
		ft_lst = ft_lst->next;
	}
	return (ft_lst);
}
