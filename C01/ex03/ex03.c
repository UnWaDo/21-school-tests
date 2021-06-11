#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int		a;
	int		b;
	int		*c;
	int		*d;
	int		a1;
	int		b1;

	a = 42;
	b = 5;
	printf("Initial values: %d, %d\n", a, b);
	a1 = 1;
	b1 = 2;
	c = &a1;
	d = &b1;
	ft_div_mod(a, b, c, d);
	printf("Result: %d, %d\n", *c, *d);
	return (0);
}
