#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int		a;
	int		b;
	int		*c;
	int		*d;

	a = 42;
	b = 5;
	printf("Initial values: %d, %d\n", a, b);
	c = malloc(4);
	d = malloc(4);
	ft_div_mod(a, b, c, d);
	printf("Expected: %d, %d\n", a / b, a % b);
	printf("Result: %d, %d\n", *c, *d);
	if (a / b == *c && a % b == *d)
		printf("Correct\n");
	else
		printf("Incorrect\n");
	free(c);
	free(d);
	return (0);
}
