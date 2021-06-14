#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_test_with_input(int nb)
{
	printf("------------\n");
	printf("Expected: %d\nResult: ", nb);
	fflush(stdout);
	ft_putnbr(nb);
	printf("\n");
}

int	main (void)
{
	ft_test_with_input(0);
	ft_test_with_input(10);
	ft_test_with_input(2);
	ft_test_with_input(123455);
	ft_test_with_input(32767);
	ft_test_with_input(2147483647);
	ft_test_with_input(-10);
	ft_test_with_input(-32768);
	ft_test_with_input(-2147483648);
	return (0);
}
