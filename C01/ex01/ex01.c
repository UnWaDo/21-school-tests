#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);
int	main (void)
{
	int		a;
	int		*b;
	int		**c;
	int		***d;
	int		****e;
	int		*****f;
	int		******g;
	int		*******h;
	int		********i;
	int		*********j;

	a = 2;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	printf("Before: %d\n", a);
	ft_ultimate_ft(j);
	printf("After: %d\n", a);
	return (0);
}
