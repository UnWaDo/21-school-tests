#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main (void)
{
	int		a[6];
	int		b[7];
	int		s;
	int 	i;

	s = 6;
	i = 0;
	printf("Was:\t");
	while (i < s)
	{
		a[i] = i;
		printf("%d", a[i]);
		i++;
	}
	i = 0;
	printf("\n\t");
	while (i < s + 1)
	{
		b[i] = i;
		printf("%d", b[i]);
		i++;
	}

	printf("\nNow:\t");
	ft_rev_int_tab(a, s);
	ft_rev_int_tab(b, s + 1);
	i = -1;
	while (++i < s)
		printf("%d", a[i]);
	i = -1;
	printf("\n\t");
	while (++i < s + 1)
		printf("%d", b[i]);
	printf("\n");
	return (0);
}
