#include <stdio.h>
#include <stdlib.h>
#include "../../ex05/ft_list.h"

t_list *ft_list_push_strs(int size, char **strs);

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	return (0);
}
