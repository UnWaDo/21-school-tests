#include "../../ex06/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*new;
	t_list	*beginning;
	int		i;

	if (size < 1)
		return (0);
	new = ft_create_elem(strs[0]);
	beginning = new;
	i = 1;
	while (i < size)
	{
		new = ft_create_elem(strs[i]);
		new->next = beginning;
		beginning = new;
		i++;
	}
	return (beginning);
}
