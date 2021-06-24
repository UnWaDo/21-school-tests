#include <stdio.h>
#include <stdlib.h>
#include "../../ex09/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_output(void *txt)
{
	printf("%s\n", txt);
}

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	ft_list_foreach(beginning, &ft_output);
	return (0);
}
