#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main (void)
{
	int		a[6];
	int		s;
	int 	i;

	s = 6;
	i = 0;
	printf("Was: ");
	while (i < s)
	{
		a[i] = s - i;
		printf("%d", a[i]);
		i++;
	}
	printf("\nNow: ");
	ft_sort_int_tab(a, s);
	i = -1;
	while (++i < s)
		printf("%d", a[i]);
	return (0);
}
