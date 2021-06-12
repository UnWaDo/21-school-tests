#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main (void)
{
	char	*a;
	char	*b;

	b = malloc(50);
	a = "This string must be capitalized";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strupcase(b));
	a = "And this 1 2...";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strupcase(b));
	a = "What will you\n\tdo with this?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strupcase(b));
	a = ". . . . h m m . . . .";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strupcase(b));
	a = "What about this one: ?";
	b = strcpy(b, a);
	printf("%s\n", b);
	printf("%s\n", ft_strupcase(b));
	a = "";
	b = strcpy(b, a);
	printf("What about this one: %s\n", b);
	printf("%s\n", ft_strupcase(b));
	free(b);
	return (0);
}
