#include "../../ex02/ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = new;
	else
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}
