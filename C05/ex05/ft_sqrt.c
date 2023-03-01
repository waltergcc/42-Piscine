/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:36:57 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/17 08:50:53 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;

	// For this exercise is considered only the rational square root
	// negative numbers, zero and fractional numbers the return will be 0
	if (nb <= 0)
		return (0);

	// checks the nearest numbers to reach the square root of a number
	while (i * i < nb)
		i++;

	// If the number multiplied by itself is equal to 'nb'
	// It's a rational square root
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/* 
int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
	printf("Square Root of -2: %d\n", ft_sqrt(-2));
	printf("Square Root of 4: %d\n", ft_sqrt(4));
	printf("Square Root of 10: %d\n", ft_sqrt(10));
	printf("Square Root of 25: %d\n", ft_sqrt(25));
} */
