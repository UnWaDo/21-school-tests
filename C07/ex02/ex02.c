#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	res;
	int	*range;
	int	i;

	if (argc < 3)
	{
		printf("Not enough arguments\n");
		return (0);
	}
	range = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	res = ft_ultimate_range(&range, min, max);
	if (res == -1)
	{
		printf("Error\n");
		return (0);
	}
	if (max > min && res != max - min)
		printf("Wrong array size: %d instead of %d\n", res, max - min);
	if (min >= max)
	{
		printf("%p\n", range);
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
