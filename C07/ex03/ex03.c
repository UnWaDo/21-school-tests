#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*range;

	if (argc < 2)
	{
		printf("Not enough arguments\n");
		return (0);
	}
	range = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);
	printf("%s\n", range);
	free(range);
	return (0);
}
