#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*a;

	a = "Some\tusual\nstring with\2aunusual\06characters...";
	printf("%s\n", a);
	ft_putstr_non_printable(a);
	return (0);
}
