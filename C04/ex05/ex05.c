#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putnbr_base(int nb, char *base, char *output);

int	ft_atoi_base(char *str, char *base);

void	ft_check_non_standartizable()
{
	char	*input;
	char	*base;
	int		res;

	printf("------------\n");
	input = " \f\n\r\t\v ----+++---+-nice";
	base = "ecin";
	printf("Input: %s in base %s\n", input, base);
	res = ft_atoi_base(input, base);
	printf("Output: %d\n", res);
	if (res == 228)
		printf("OK\n");
	else
		printf("KO\n");
	printf("------------\n");
	input = "oomyyy";
	base = "ymo";
	printf("Input: %s in base %s\n", input, base);
	res = ft_atoi_base(input, base);
	printf("Output: %d\n", res);
	if (res == 675)
		printf("OK\n");
	else
		printf("KO\n");
	printf("------------\n");
	input = "oo--myyy";
	base = "ymo";
	printf("Input: %s in base %s\n", input, base);
	res = ft_atoi_base(input, base);
	printf("Output: %d\n", res);
	if (res == 8)
		printf("OK\n");
	else
		printf("KO\n");
	printf("------------\n");
	input = "abs...;";
	base = "bas.";
	printf("Input: %s in base %s\n", input, base);
	res = ft_atoi_base(input, base);
	printf("Output: %d\n", res);
	if (res == 1215)
		printf("OK\n");
	else
		printf("KO\n");
}

int	ft_check_given_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_test_with_input(int nb, char *base)
{
	char	*result;
	int		res;

	printf("------------\n");
	result = malloc(50);
	memset(result, 0, 50);
	ft_putnbr_base(nb, base, result);
	printf("Input: %d in base %s\nPutnbr: %s\n", nb, base, result);
	res = ft_atoi_base(result, base);
	printf("Output: %d\n", res);
	if (res == nb * ft_check_given_base(base))
		printf("OK\n");
	else
		printf("KO\n");
	free(result);
}

int	main (void)
{
	ft_test_with_input(42, "0123456789");
	ft_test_with_input(21, "01234567");
	ft_test_with_input(47, "0123456789ABCDEF");
	ft_test_with_input(0, "01234");
	ft_test_with_input(-13, "0123456789");
	ft_test_with_input(-43, "01234567");
	ft_test_with_input(123455, "0123456+");
	ft_test_with_input(123455, "0123456-");
	ft_test_with_input(123455, "01234563");
	ft_test_with_input(123455, "");
	ft_test_with_input(123455, "0");
	ft_test_with_input(-32767, "poneyvif");
	ft_test_with_input(2147483647, "ga");
	ft_test_with_input(1257498487, "0,moyaObAr.n4");
	ft_test_with_input(-10, "Hf");
	ft_test_with_input(-31533, "Oo");
	ft_test_with_input(-2147483648, "42");
	ft_check_non_standartizable();
	return (0);
}
