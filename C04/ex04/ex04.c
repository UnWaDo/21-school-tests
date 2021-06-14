#include <stdio.h>

void	ft_putnbr_base(int nb, char *base);

void	ft_test_with_input(int nb, char *base)
{
	printf("------------\n");
	printf("Expected: %d in base %s\nResult: ", nb, base);
	fflush(stdout);
	ft_putnbr_base(nb, base);
	if (nb >= 0)
		printf("\nHex: %x, oct: %o\n", nb, nb);
	else
		printf("\nHex: -%x, oct -%o\n", -nb, -nb);
	printf("\n");
}

int	main (void)
{
	ft_test_with_input(42, "0123456789");
	ft_test_with_input(21, "01234567");
	ft_test_with_input(47, "0123456789ABCDEF");
	ft_test_with_input(0, "01234");
	ft_test_with_input(-13, "0123456789");
	ft_test_with_input(-43, "01234567");
	ft_test_with_input(123455, "0123456+");
	ft_test_with_input(123455, "0123456-");
	ft_test_with_input(123455, "01234563");
	ft_test_with_input(123455, "");
	ft_test_with_input(123455, "0");
	ft_test_with_input(-32767, "poneyvif");
	ft_test_with_input(2147483647, "ga");
	ft_test_with_input(1257498487, "0,moyaObAr.n4");
	ft_test_with_input(-10, "Hf");
	ft_test_with_input(-31533, "Oo");
	ft_test_with_input(-2147483648, "42");
	return (0);
}
