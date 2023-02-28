/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:11:13 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/25 19:13:45 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	// If the beginning of the base is null, returns 0
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		// If there are non-printable characters or signs of - and +, returns 0
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;

		// Check if there are repeated character
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}

	// Returns the size of the base
	return (i);
}

int	ft_base_match(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		// If the past Char is the same as the base, returns the 'i'
		if (c == base[i])
			return (i);
		i++;
	}
	// If the past char is the null of the string, the return will be -1
	return (-1);
}

int	ft_pre_digits(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	// Check the spaces and increased 'i'
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	// checks the signs of + and - and increases the 'i'
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// Change the value of sign in ft_atoi_base through the pointer ptr_sign
	*ptr_sign = sign;

	// In the end, returns the lenght from spaces and signs
	return (i);
}

// converts any base to decimal
int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		sum;
	int		current;
	int		base_size;

	sum = 0;
	sign = 1;

	// receives the base lenght or receives 0
	base_size = ft_check_base(base);

	// If the base length is less than 2
	// or the base check returns zero, the return will be zero
	// Otherwise the conversions are made
	if (base_size >= 2)
	{
		// 'i' receives lenght from pre digits
		i = ft_pre_digits(str, &sign);

		// receives the first correspondence of the base
		current = ft_base_match(str[i], base);

		// as long as there is correspondence
		while (current != -1)
		{
			// This formula converts the bases to decimal
			sum = (sum * base_size) + current;
			i++;

			// Current receives ft_base_match from the next Index
			current = ft_base_match(str[i], base);
		}
		return (sign * sum);
	}
	return (0);
}
/* 
int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
	printf("%d\n", ft_atoi_base(" --101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
} */