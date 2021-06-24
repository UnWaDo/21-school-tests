#include <stdio.h>
#include <stdlib.h>
#include "../../ex07/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	printf("%s\n", ft_list_at(beginning, 2)->data);;
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	return (0);
}
