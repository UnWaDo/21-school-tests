#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	char	*a;
	char	*b;

	b = malloc(50);
	a = "Simple string";
	printf("a: %s\n", a);
	memset(b, 42, 50);
	strncpy(b, a, 0);
	printf("exp 0: a: %s b: %s\n", a, b);
	memset(b, 42, 50);
	ft_strncpy(b, a, 0);
	printf("res 0: a: %s b: %s\n", a, b);
	memset(b, 42, 50);
	strncpy(b, a, 20);
	printf("exp 20: a: %s b: %s\n", a, b);
	memset(b, 42, 50);
	ft_strncpy(b, a, 20);
	printf("res 20: a: %s b: %s\n", a, b);
	memset(b, 42, 50);
	strncpy(b, a, 5);
	printf("exp 5: a: %s b: %s\n", a, b);
	memset(b, 42, 50);
	ft_strncpy(b, a, 5);
	printf("res 5: a: %s b: %s\n", a, b);
	free(b);
	return (0);
}
