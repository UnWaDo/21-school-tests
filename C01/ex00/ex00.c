#include <stdio.h>

void	ft_ft(int *nbr);
int	main (void)
{
	int		a;

	a = 1;
	printf("Before: %d\n", a);
	ft_ft(&a);
	printf("After: %d\n", a);
	return (0);
}
