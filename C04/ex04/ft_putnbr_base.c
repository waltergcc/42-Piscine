/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:39:42 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/18 14:59:03 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	// If the base is less than 2, returns 0
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		
		// If it's found signs of + or -
		// or non-printable characters, returns 0
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);

		// check if the base has any repeated character
		// If there is any, the return is 0
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	// If there is no problem, the return is 1
	return (1);
}

//This function will convert a decimal number to decimal or other bases and print it
void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	// Call the function to check the past base
	// If the return on the function is 0, the program finish
	if (!ft_check_base(base))
		return ;
	
	// counts the size of the base
	size = ft_strlen(base);

	// long n avoid the issues with the int min
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = 0;

	while (n > 0)
	{
		// Array Box receives the converted values of 'n' to the base
		// This formula of 'n' module size will find the correct number at the base
		box[i] = base[n % size];
		n = n / size;
		i++;
	}

	// The values stored in box were reversed
	// This repetition will print what is in the box
	// starting from last position to the first
	while (--i >= 0)
		ft_putchar(box[i]);
}
/* 
int	main(void)
{
	int	n = 42;
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";

	write(1, "decimal to decimal: ", 20);
	ft_putnbr_base(n, dec);
	write(1, "\ndecimal to binary: ", 20);
	ft_putnbr_base(n, bin);
	write(1, "\ndecimal to octal: ", 20);
	ft_putnbr_base(n, oct);
	write(1, "\ndecimal to hexadecimal: ", 26);
	ft_putnbr_base(n, hex);
	write(1, "\n", 1);

} */