#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ft_lst;
	
	ft_lst = *lst;
	while (ft_lst->next)
	{
		ft_lst = ft_lst->next;
	}
	ft_lst->next = new;
}
