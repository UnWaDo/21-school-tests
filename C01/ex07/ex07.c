#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_init_array(int *arr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		arr[i] = i;
		i++;
	}
}

void	ft_output_array(int *arr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}

int	main (void)
{
	int		*a;
	int		*b;
	int		s;

	s = 8;
	a = malloc(4 * s);
	b = malloc(4 * (s + 1));
	ft_init_array(a, s);
	ft_init_array(b, s + 1);
	printf("Was:\t");
	ft_output_array(a, s);
	printf("\n\t");
	ft_output_array(b, s + 1);
	printf("\n");
	ft_rev_int_tab(a, s);
	ft_rev_int_tab(b, s + 1);
	printf("Reverse:\t");
	ft_output_array(a, s);
	printf("\n\t");
	ft_output_array(b, s + 1);
	printf("\n");
	free(a);
	free(b);
	return (0);
}
