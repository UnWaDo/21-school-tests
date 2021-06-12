#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main (void)
{
	char	*a;

	a = "ThisStringMustBeInvalid";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_lowercase(a));
	a = "thisstringmustbevalid";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_lowercase(a));
	a = "butnotthis1";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_lowercase(a));
	a = "andnoteven this";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_lowercase(a));
	a = "";
	printf("What about this one: %s\n", a);
	printf("%d\n", ft_str_is_lowercase(a));
	return (0);
}
