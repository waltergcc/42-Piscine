#include <stdlib.h>
//#include "ft_convert.h"
//#include <stdio.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	is_match(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	pre_digits(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	sum;
	int	current;
	int	size;

	sum = 0;
	i = 0;
    sign = 0;
	size = check_base(base);
	if (size >= 2)
	{
		i = pre_digits(str, &sign);
		current = is_match(str[i], base);
		while (current != -1)
		{
			sum = (sum * size) + current;
			i++;
			current = is_match(str[i], base);
		}
		return (sign * sum);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted_str;
	int		conversion;
	int		new_digit_places;

	if (check_base(base_to) == 0 || check_base(base_from) == 0)
		return (0);
	conversion = ft_atoi_base(nbr, base_from);
	new_digit_places = digit_places(conversion, base_to, 0);
	converted_str = (char *)malloc(sizeof(char) * (new_digit_places + 1));
	if (converted_str == NULL)
		return (0);
	ft_putnbr_base(conversion, base_to, converted_str);
	converted_str[new_digit_places] = '\0';
	return (converted_str);
}
/*
int main (void)
{
	printf("%s", ft_convert_base("111101110", "01", "0123456789"));
}*/