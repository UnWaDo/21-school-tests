#include <stdio.h>

int	ft_str_is_numeric(char *a);

int	main (void)
{
	char	*a;

	a = "1234567890";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	a = "1234567a890";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	a = "123456\t7890";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	a = "1234sorry567890";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	a = "123456 7890";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	a = "";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_numeric(a));
	return (0);
}
