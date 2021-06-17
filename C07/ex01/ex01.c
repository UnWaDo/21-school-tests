#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	*res;
	int	i;

	if (argc < 3)
	{
		printf("Not enough arguments\n");
		return (0);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	res = ft_range(min, max);
	if (min >= max)
	{
		printf("%p\n", res);
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", res[i]);
		i++;
	}
	free(res);
	return (0);
}
