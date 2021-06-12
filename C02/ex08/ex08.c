#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main (void)
{
	char	*a;
	char	*b;

	b = malloc(50);
	a = "This STRING MUST BE DECAPITALIZED";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strlowcase(b));
	a = "And THiS 1 2...";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strlowcase(b));
	a = "WhAt wIlL YoU\n\tdO WiTh ThIs?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strlowcase(b));
	a = ". . . . H M M . . . .";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strlowcase(b));
	a = "What about THIS one: ?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strlowcase(b));
	a = "";
	b = strcpy(b, a);
	printf("What about this one: %s\n", b);
	printf("%s\n", ft_strlowcase(b));
	free(b);
	return (0);
}
