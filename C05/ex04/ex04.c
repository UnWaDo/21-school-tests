#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_fibonacci(int index);

void	ft_test_with_input(int nb, int exp)
{
	int	res;

	res = ft_fibonacci(nb);
	printf("------------\n");
	printf("Given: index %d\nExpected: %d\nResult: %d\n", nb, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}
int	main(void)
{
	int	answers[25];
	int	i;

	answers[0] = 0;
	answers[1] = 1;
	i = 2;
	while (i < 25)
	{
		answers[i] = answers[i - 1] + answers[i - 2];
		i++;
	}
	i = 0;
	while (i < 25)
	{
		ft_test_with_input(i, answers[i]);
		i += 2;
	}
	ft_test_with_input(-10, -1);
}
