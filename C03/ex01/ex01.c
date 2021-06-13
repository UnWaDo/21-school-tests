#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	ft_compare_results(char *s1, char *s2, unsigned int n)
{
	int		exp;
	int		res;

	printf("---------------\n");
	printf("S1: %s\nS2: %s\nN: %d\n", s1, s2, n);
	exp = strncmp(s1, s2, n);
	res = ft_strncmp(s1, s2, n);
	printf("exp: %d\nres: %d\n", exp, res);
	if (exp == res)
		printf("Status: OK\n");
	else
		printf("Status: KO\n");
	printf("---------------\n");
}

int	main(void)
{
	char	*a;
	char	*b;

	a = "Some simple string";
	b = "Some other simple string";
	ft_compare_results(a, b, 4);
	ft_compare_results(b, a, 10);
	a = "These strings vary from the very beginning";
	b = "Really?";
	ft_compare_results(a, b, 15);
	a = "";
	b = "Previous string is empty";
	ft_compare_results(a, b, 5);
	a = "These strings are equal";
	b = "These strings are equal";
	ft_compare_results(a, b, 40);
	ft_compare_results(a, b, 5);
	a = "This string contains special symbol \200";
	b = "This string contains special symbol \20";
	ft_compare_results(a, b, 50);
	return (0);
}
