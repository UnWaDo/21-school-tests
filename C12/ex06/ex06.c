#include <stdio.h>
#include <stdlib.h>
#include "../../ex06/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	while(beginning)
	{
		printf("%s\n", beginning->data);
		beginning = beginning->next;
	}
	ft_list_clear(beginning, &free);
	free(beginning);
	free(beginning);
	return (0);
}
