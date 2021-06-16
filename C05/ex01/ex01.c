#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_recursive_factorial(int nb);

void	ft_test_with_input(int nb)
{
	int	exp;
	int	res;

	exp = tgamma(nb + 1);
	res = ft_recursive_factorial(nb);
	printf("------------\n");
	printf("Given: %d\nExpected: %d\nResult: %d\n", nb, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}
int	main(void)
{
	int	i;

	i = 0;
	while (i < 12)
	{
		ft_test_with_input(i);
		i++;
	}
	ft_test_with_input(-12);
	ft_test_with_input(2147483647);
	ft_test_with_input(-2147483648);
}
