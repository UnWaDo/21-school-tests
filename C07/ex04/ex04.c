#include <stdlib.h>
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	char	*range;

	if (argc < 4)
	{
		printf("Not enough arguments\n");
		return (0);
	}
	range = ft_convert_base(argv[1], argv[2], argv[3]);
	if (!range)
		printf("Invalid base\n");
	printf("%s\n", range);
	free(range);
	return (0);
}
