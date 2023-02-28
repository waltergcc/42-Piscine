/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:44:24 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/11 17:56:28 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xdigit(unsigned char c)
{
	char	*xdigit;

	// Hexadecimal base
	xdigit = "0123456789abcdef";

	// the division and the module find the character corresponding
	// to the past in the hexadecimal base and print it
	ft_putchar(xdigit[c / 16]);
	ft_putchar(xdigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// If this is less than 32 or equal to 127
		// that means non-printable 
		if (str[i] < ' ' || str[i] == 127)
		{
			// Two backslashes to be able to print 1
			ft_putchar('\\');
			// Call the function xdigit to transform the current character into hexadecimal
			ft_xdigit(str[i]);
		}
		else
			// If it's different from non-propriable, the character is printed
			ft_putchar(str[i]);
		i++;
	}
}
/*  
int	main(void)
{
	char *str = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
} */