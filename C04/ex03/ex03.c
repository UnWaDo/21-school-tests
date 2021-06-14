#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

void	ft_test_with_input(char *str)
{
	int	exp;
	int	res;

	exp = atoi(str);
	res = ft_atoi(str);
	printf("------------\n");
	printf("Input: %s\n", str);
	printf("Expected: %d\nResult: %d\n", exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO (but check up with School rules)\n");
}

int	main (void)
{
	ft_test_with_input("42");
	ft_test_with_input("  \t\n\r\f\v123");
	ft_test_with_input("   ---+--+1234ab567");
	ft_test_with_input("   ---  +--+1234ab567");
	ft_test_with_input("   ---+--+12--34ab567");
	ft_test_with_input("What about no numbers?");
	ft_test_with_input("0");
	ft_test_with_input("2147483647");
	ft_test_with_input("-2147483648");
	ft_test_with_input("2147483648");
	return (0);
}
