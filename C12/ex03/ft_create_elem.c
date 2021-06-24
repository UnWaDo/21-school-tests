#include "../../ex03/ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	new->data = data;
	new->next = 0;
	return (new);
}
