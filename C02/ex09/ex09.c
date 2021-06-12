#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main (void)
{
	char	*a;
	char	*b;

	b = malloc(50);
	a = "This STRING MUST BE CAPITALIZED";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = "And THiS 1 2...";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = "WhAt wIlL YoU\n\tdO WiTh ThIs?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = ". . . . H M M . . . .";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = "What about THIS one: ?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = "";
	b = strcpy(b, a);
	printf("What about this one: %s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	a = "Just to be sure: salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strcapitalize(b));
	free(b);
	return (0);
}
