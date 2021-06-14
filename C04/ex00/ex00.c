#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_test_with_input(char *str)
{
	int	exp;
	int	res;

	exp = strlen(str);
	res = ft_strlen(str);
	printf("------------\n");
	printf("Given: %s\nExpected: %d\nResult: %d\n", str, exp, res);
	if (exp == res)
		printf("OK\n");
	else
		printf("KO\n");
}
int	main(void)
{
	char	*a;

	a = "Some string";
	ft_test_with_input(a);
	a = "Next string will be empty";
	ft_test_with_input(a);
	a = "";
	ft_test_with_input(a);
	a = "What if \200? What if \0...";
	ft_test_with_input(a);
}
