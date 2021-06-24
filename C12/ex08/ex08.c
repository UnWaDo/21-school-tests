#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_reverse(t_list **begin_list);

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	ft_list_reverse(&beginning);
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	return (0);
}
