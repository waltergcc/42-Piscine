/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:43:22 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/25 20:50:52 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// counts the amount of characters necessary for a certain value
int	ft_digit_places(int nbr, char *base, int i)
{
	int				size;
	long int	n;

	size = ft_strlen(base);
	n = nbr;

	// If it's negative, it converts the number to positive and counts a space
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	// counts the necessary spaces for the other digits
	while (n >= size)
	{
		n /= size;
		i++;
	}
	i++;
	return (i);
}

// converts a decimal number to other bases
void	ft_putnbr_base(int nbr, char *base, char *converted)
{
	int		size;
	long	n;
	int		first;
	int		last;

	size = ft_strlen(base);

	// 'last' receives the amount of spaces necessary for the digits
	last = ft_digit_places(nbr, base, 0);

	// This avoids the problem with int min
	n = nbr;
	first = 0;

	// if negative, add the minus sign in the first position and increase the counter
	if (n < 0)
	{
		converted[0] = '-';
		n *= -1;
		first++;
	}

	// decreases 1 digit space
	last--;

	// while 'n' is larger or equal to size, converted receives the converted number
	// 'Converted 'is receiving the values to the last for the first
	while (n >= size)
	{
		converted[last] = base[n % size];
		n /= size;
		last--;
	}
	// If 'n' is smaller than the size, the first position of converted receives the base
	if (n < size)
		converted[first] = base[n];
}
/* 
int main(void)
{
    char c1[32];
    char c2[32];
    char c3[32];
    char c4[32];
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
	int	n = 42;
    
    ft_putnbr_base(n, bin, c1);
    printf("%d in binary: %s\n", n, c1);
	ft_putnbr_base(n, oct, c2);
    printf("%d in octal: %s\n", n, c2);
	ft_putnbr_base(n, dec, c3);
    printf("%d in decimal: %s\n", n, c3);
	ft_putnbr_base(n, hex, c4);
    printf("%d in hexadecimal: %s\n", n, c4);
} */