#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_find_next_prime(int nb);

void	ft_test_with_input(int nb, int exp)
{
	int	res;

	res = ft_find_next_prime(nb);
	printf("------------\n");
	printf("Given: %d\nExpected: %d\nResult: %d\n", nb, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}

int	main(void)
{
	ft_test_with_input(0, 2);
	ft_test_with_input(1, 2);
	ft_test_with_input(2, 2);
	ft_test_with_input(23, 23);
	ft_test_with_input(100, 101);
	ft_test_with_input(978, 983);
	ft_test_with_input(6857324, 6857329);
	ft_test_with_input(6183644, 6183659);
	ft_test_with_input(10570841, 10570841);
	ft_test_with_input(2147483647, 2147483647);
}
