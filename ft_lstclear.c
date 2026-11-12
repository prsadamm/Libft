#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*clear;

	tmp = *lst;
	while (tmp)
	{
		clear = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = clear;
	}
	*lst = NULL;
}
