#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main (void)
{
	char	*a;

	a = "This string must be valid";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	a = "And this 1 2...";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	a = "By the way, \t is actually not printable";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	a = "And newline \n not printable";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	a = "Did you know about the DEL char?\x7F";
	printf("%s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	a = "";
	printf("What about this one: %s\n", a);
	printf("%d\n", ft_str_is_printable(a));
	return (0);
}
