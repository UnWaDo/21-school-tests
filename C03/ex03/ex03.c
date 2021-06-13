#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void	ft_check_function_work(char *buf, int size, char *s1, char *s2, unsigned int p)
{
	char	*exp;
	char	*res;

	printf("---------------\n");
	printf("Dest: %s\nSrc: %s\nP: %d\n", s1, s2, p);
	memset(buf, 0, size);
	strcpy(buf, s1);
	exp = strncat(buf, s2, p);
	printf("\texp\nDest: %s\nSrc: %s\n", exp, s2);
	memset(buf, 0, size);
	strcpy(buf, s1);
	res = ft_strncat(buf, s2, p);
	printf("\tres\nDest: %s\nSrc: %s\n", res, s2);
	printf("---------------\n");
}

int	main(void)
{
	char	*a;
	char	*b;
	char	*buf;

	buf = malloc(50);
	a = "There is no spoon, Neo";
	b = "Some sort of string";
	ft_check_function_work(buf, 50, a, b, 5);
	a = "";
	b = "Destination string is empty";
	ft_check_function_work(buf, 50, a, b, 10);
	a = "Source string is empty";
	b = "";
	ft_check_function_work(buf, 50, a, b, 20);
	free(buf);
}
