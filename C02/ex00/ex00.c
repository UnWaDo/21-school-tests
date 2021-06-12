#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dst, char *src);

int	main (void)
{
	char	*a;
	char	*b;

	b = malloc(50);
	a = "Simple string";
	printf("Params: ft_strcpy(b, %s)\n", a);
	memset(b, 0, 50);
	strcpy(b, a);
	printf("exp: a: %s, b: %s\n", a, b);
	memset(b, 0, 50);
	ft_strcpy(b, a);
	printf("res: a: %s, b: %s\n", a, b);
	free(b);
	return (0);
}
