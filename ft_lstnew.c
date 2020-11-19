/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dxenophi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:11:09 by dxenophi          #+#    #+#             */
/*   Updated: 2020/11/19 17:33:58 by dxenophi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	if (!content)
	{
		new = (t_list *)malloc(sizeof(*new) * 1);
		if (!new)
			return (NULL);
		new->content = NULL;
		new->next = NULL;
	}
	else
	{
		new = (t_list *)malloc(sizeof(*new) * ft_strlen(content));
		if (!new)
			return (NULL);
		new->content = content;
		new->next = NULL;
	}
	return (new);
}
