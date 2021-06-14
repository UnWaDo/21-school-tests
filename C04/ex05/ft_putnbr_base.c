#include <unistd.h>

int	ft_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_output(int nb, char *base, int length, char *output)
{
	int	remainder;

	remainder = nb % length;
	remainder *= -1;
	nb /= length;
	if (nb != 0)
		ft_output(nb, base, length, output + 1);
	if (nb == 0)
		output[1] = 0;
	*output = *(base + remainder);
}

void	ft_reverse_string(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while(j < i / 2)
	{
		c = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = c;
		j++;
	}
}

void	ft_putnbr_base(int nb, char *base, char *output)
{
	int		length;

	length = ft_is_valid(base);
	if (!length)
		return ;
	if (nb < 0)
	{
		*output = '-';
		output++;
	}
	else
		nb = -nb;
	ft_output(nb, base, length, output);
	ft_reverse_string(output);
}
