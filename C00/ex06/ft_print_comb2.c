/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:57:36 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/05 16:12:18 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	// The numbers won't be repeated because
	// j is the sum of i plus one
	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			// The division and module of each number allows you to separate them by digit
			// '0' converts the number to ASCII table. Change from int to char.
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');

			//If not the numbers 98 and 99 the comma is printed
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/* 
int	main(void)
{
	ft_print_comb2();
} */
