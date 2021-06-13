#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main (void)
{
	char	*a;
	char	*b;
	int		i;

	b = malloc(50);
	memset(b, 42, 50);
	a = "This string will be copied";
	printf("A: %s\n", a);
	printf("B: %s\n", b);
	memset(b, 42, 50);
	i = strlcpy(b, a, 10);
	printf("B (exp, 10), i: %s, %d\n", b, i);
	memset(b, 42, 50);
	i = ft_strlcpy(b, a, 10);
	printf("B (fnd, 10), i: %s, %d\n", b, i);
	memset(b, 42, 50);
	i = strlcpy(b, a, 30);
	printf("B (exp, 30), i: %s, %d\n", b, i);
	memset(b, 42, 50);
	i = ft_strlcpy(b, a, 30);
	printf("B (fnd, 30), i: %s, %d\n", b, i);
	memset(b, 42, 50);
	i = strlcpy(b, a, 0);
	printf("B (exp, 0), i: %s, %d\n", b, i);
	memset(b, 42, 50);
	i = ft_strlcpy(b, a, 0);
	printf("B (fnd, 0), i: %s, %d\n", b, i);
	free(b);
	return (0);
}
