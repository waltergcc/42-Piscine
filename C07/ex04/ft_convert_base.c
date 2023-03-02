/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:20:46 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/02 12:20:53 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// These are the prototypes of the functions of file ft_convert_base2.c that will be used
// When compiling, it needs to compile an executable for both files
// can be done in this way: cc ft_convert_base.c ft_convert_base2.c -o main
int	ft_digit_places(int nbr, char *base, int i);
void	ft_putnbr_base(int nbr, char *base, char *converted_str);

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

// converts one number from one base to another
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		decimal;
	int		i;

	// If one of the bases is not correct, the return is zero
	if (ft_check_base(base_to) == 0 || ft_check_base(base_from) == 0)
		return (0);

	// Receives the conversion from 'NBR' to decimal
	decimal = ft_atoi_base(nbr, base_from);

	// 'i' receives the size of digit places from the converted number to new base
	i = ft_digit_places(decimal, base_to, 0);

	// 'Converted' receives allocated memory
	converted = (char *)malloc(sizeof(char) * (i + 1));
	if (converted == NULL)
		return (0);
	
	// converts the decimal number to the new base
	ft_putnbr_base(decimal, base_to, converted);
	converted[i] = '\0';
	return (converted);
}
/* 
int main (void)
{
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
	char	*nbr = "111101110";

	printf("%s to decimal: %s\n", nbr, ft_convert_base(nbr, bin, dec));
	printf("%s to octal: %s\n", nbr, ft_convert_base(nbr, bin, oct));
	printf("%s to hexadecimal: %s\n", nbr, ft_convert_base(nbr, bin, hex));
} */