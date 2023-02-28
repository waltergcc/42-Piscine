/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:34:31 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/21 09:41:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


// Function to print an integer to stdout
void	ft_putnbr(int nb)
{
	long int	n;

	// long int 'n' receives int 'nb'
	// to avoid the issues with the int min
	n = nb;
	
	// If the 'n' is negative
	// write a minus sign and make it positive
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}

	// If 'n' is a single digit between 0 and 9. write it.
	// The plus '0' convert the int to char
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');

	// If 'n' is more than one digit
	if (n > 9)
	{
		// Recursively print the quotient by dividing the number by 10
		ft_putnbr(n / 10);
		
		// Recursively print the remainder by computing the number modulo 10
		ft_putnbr(n % 10);
	}
}
/* 
int	main(void)
{
	write(1, "Print a positive number: ", 26);
	ft_putnbr(42);
	write(1, "\nPrint a negative number: ", 26);
	ft_putnbr(-42);
	write(1, "\nPrint zero: ", 13);
	ft_putnbr(0);
	write(1, "\nPrint the max value of int: ", 29);
	ft_putnbr(2147483647);
	write(1, "\nPrint the min value of int: ", 29);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
} */
