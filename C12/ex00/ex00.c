#include <stdio.h>
#include <stdlib.h>
#include "../../ex00/ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*beginning;
	t_list	*end;
	int		i;

	if (argc < 2)
		return (1);
	beginning = ft_create_elem(argv[1]);
	end = beginning;
	i = 2;
	while (i < argc)
	{
		end->next = ft_create_elem(argv[i]);
		end = end->next;
		i++;
	}
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	return (0);
}
