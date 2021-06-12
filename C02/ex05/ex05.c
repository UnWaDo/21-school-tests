#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main (void)
{
	char	*a;

	a = "THISSTRINGMUSTBEVALID";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_uppercase(a));
	a = "ButNotThisOne";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_uppercase(a));
	a = "MAYBETHIS1";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_uppercase(a));
	a = "WHAT ABOUT NOW";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_uppercase(a));
	a = "";
	printf("What about this one: %s\n", a);
	printf("%d\n", ft_str_is_uppercase(a));
	return (0);
}
