#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_sqrt(int nb);

void	ft_test_with_input(int nb)
{
	int	res;
	int exp;

	exp = sqrt(nb);
	if (nb < 0 || exp * exp != nb)
		exp = 0;
	res = ft_sqrt(nb);
	printf("------------\n");
	printf("Given: %d\nExpected: %d\nResult: %d\n", nb, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}

int	main(void)
{
	ft_test_with_input(0);
	ft_test_with_input(25);
	ft_test_with_input(40000);
	ft_test_with_input(5);
	ft_test_with_input(1000);
	ft_test_with_input(-100);
}
