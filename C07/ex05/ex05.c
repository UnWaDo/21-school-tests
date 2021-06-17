#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**range;
	int		i;

	if (argc < 3)
	{
		printf("Not enough arguments\n");
		return (0);
	}
	range = ft_split(argv[2], argv[1]);
	if (!range)
	{
		printf("No data\n");
		return (0);
	}
	i = 0;
	while (range[i])
	{
		printf("%s\n", range[i]);
		free(range[i]);
		i++;
	}
	free(range);
	return (0);
}
