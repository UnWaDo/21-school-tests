#include <stdio.h>

int	ft_strlen(char *str);

int	main (void)
{
	char	*a;

	a = "Some";
	printf("%s\n", a);
	printf("Length: %d\n", ft_strlen(a));
	return (0);
}
