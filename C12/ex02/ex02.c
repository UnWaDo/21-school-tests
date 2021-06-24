#include <stdio.h>
#include <stdlib.h>
#include "../../ex02/ft_list.h"

int ft_list_size(t_list *begin_list);
void ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	t_list	*beginning;
	int		i;
	int		am;

	if (argc < 2)
	{
		printf("%d\n", ft_list_size(0));
		return (1);
	}
	beginning = ft_create_elem(argv[1]);
	i = 2;
	while (i < argc)
	{
		ft_list_push_front(&beginning, argv[i]);
		i++;
	}
	am = ft_list_size(beginning);
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	printf("%d\n", am);
	return (0);
}
