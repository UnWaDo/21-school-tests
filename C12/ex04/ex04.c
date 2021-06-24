#include <stdio.h>
#include <stdlib.h>
#include "../../ex04/ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	t_list	*beginning;
	int		i;

	if (argc < 2)
		return (1);
	beginning = ft_create_elem(argv[1]);
	i = 2;
	while (i < argc)
	{
		ft_list_push_back(&beginning, argv[i]);
		i++;
	}
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	return (0);
}
