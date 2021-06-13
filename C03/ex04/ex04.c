#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

void	ft_check_function_work(char *str, char *to_find)
{
	char	*exp;
	char	*res;

	printf("---------------\n");
	printf("Str: %s\nSearch for: %s\n", str, to_find);
	exp = strstr(str, to_find);
	printf("exp: %p\n", exp);
	res = ft_strstr(str, to_find);
	printf("res: %p\n", res);
	printf("---------------\n");
}

int	main(void)
{
	char	*a;
	char	*b;

	a = "There is some string";
	b = "string";
	ft_check_function_work(a, b);
	a = "There is no spoon, Neo";
	b = "Neo";
	ft_check_function_work(a, b);
	a = "There is no spoon, Neo";
	b = "Spoon";
	ft_check_function_work(a, b);
}
