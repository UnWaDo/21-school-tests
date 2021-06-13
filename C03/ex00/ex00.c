#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_compare_results(char *s1, char *s2)
{
	int		exp;
	int		res;

	printf("---------------\n");
	printf("S1: %s\nS2: %s\n", s1, s2);
	exp = strcmp(s1, s2);
	res = ft_strcmp(s1, s2);
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
	ft_compare_results(a, b);
	ft_compare_results(b, a);
	a = "These strings vary from the very beginning";
	b = "Really?";
	ft_compare_results(a, b);
	a = "";
	b = "Previous string is empty";
	ft_compare_results(a, b);
	a = "These strings are equal";
	b = "These strings are equal";
	ft_compare_results(a, b);
	a = "This string contains special symbol \200";
	b = "This string contains special symbol \20";
	ft_compare_results(a, b);
	return (0);
}
