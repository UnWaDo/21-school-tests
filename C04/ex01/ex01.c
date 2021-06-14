#include <stdio.h>
#include <string.h>

int	ft_putstr(char *str);

void	ft_test_with_input(char *str)
{
	printf("------------\n");
	printf("Expected:\n%s\nResult:\n", str);
	fflush(stdout);
	ft_putstr(str);
	printf("\n");
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
	a = "What if\nnewline?\nWhat about\ttab?";
	ft_test_with_input(a);
}
