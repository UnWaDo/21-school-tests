#include <unistd.h>
#include <string.h>

void	ft_print_combn(int n);

int	ft_chars_to_int(char *chars)
{
	int		res;

	res = chars[0] - '0';
	return (res);
}

int	main (int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc == 2)
		i = ft_chars_to_int(argv[1]);
	if (i > 0 && i < 10)
		ft_print_combn(i);
	return (0);
}
