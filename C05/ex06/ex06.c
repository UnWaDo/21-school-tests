#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_is_prime(int nb);

void	ft_test_with_input(int nb, int exp)
{
	int	res;

	res = ft_is_prime(nb);
	printf("------------\n");
	printf("Given: %d\nExpected: %d\nResult: %d\n", nb, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}

int	main(void)
{
	ft_test_with_input(0, 0);
	ft_test_with_input(1, 0);
	ft_test_with_input(2, 1);
	ft_test_with_input(23, 1);
	ft_test_with_input(100, 0);
	ft_test_with_input(10570841, 1);
	ft_test_with_input(2147483647, 1);
}
