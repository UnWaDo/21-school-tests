#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_recursive_power(int nb, int power);

void	ft_test_with_input(int nb, int power)
{
	int	exp;
	int	res;

	if (!nb && !power)
		exp = 1;
	else
		exp = pow(nb, power);
	res = ft_recursive_power(nb, power);
	printf("------------\n");
	printf("Given: %d in power %d\nExpected: %d\nResult: %d\n", nb, power, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}
int	main(void)
{
	ft_test_with_input(1, 1);
	ft_test_with_input(0, 0);
	ft_test_with_input(10, 0);
	ft_test_with_input(5, 2);
	ft_test_with_input(10, 7);
	ft_test_with_input(8, 4);
	ft_test_with_input(10, -1);
	ft_test_with_input(2, 31);
	ft_test_with_input(-2, 5);
	ft_test_with_input(-2, 6);
}
