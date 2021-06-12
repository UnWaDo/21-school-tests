#include <stdio.h>

int	ft_str_is_alpha(char *a);

int	main (void)
{
	char	*a;

	a = "ThisStringMustBeValid";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_alpha(a));
	a = "ThisStringMustBeInvalid...";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_alpha(a));
	a = "AndThisOne2";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_alpha(a));
	a = "Even this";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_alpha(a));
	a = "";
	printf("What about this one: %s\n", a);
	printf("%d\n", ft_str_is_alpha(a));
	return (0);
}
