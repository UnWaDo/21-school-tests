#include <stdio.h>
#include <stdlib.h>
#include "../../ex09/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());

void	ft_output(void *txt)
{
	printf("%s\n", txt);
}

int	ft_compare(char *a, char *b)
{
	if (a[0] == b[0])
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*beginning;

	beginning = ft_list_push_strs(argc - 1, argv + 1);
	ft_list_foreach_if(beginning, &ft_output, argv[1], &ft_compare);
	return (0);
}
