#include <stdio.h>
#include <stdlib.h>
#include "../../ex03/ft_list.h"

t_list *ft_list_last(t_list *begin_list);

int	main(int argc, char **argv)
{
	t_list	*beginning;
	t_list	*end;
	int		i;
	t_list	*last;

	if (argc < 2)
	{
		printf("%d\n", ft_list_last(0) == 0);
		return (1);
	}
	beginning = ft_create_elem(argv[1]);
	end = beginning;
	i = 2;
	while (i < argc)
	{
		end->next = ft_create_elem(argv[i]);
		end = end->next;
		i++;
	}
	last = ft_list_last(beginning);
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	printf("%s\n", last->data);
	return (0);
}
