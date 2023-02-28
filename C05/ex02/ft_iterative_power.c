/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:48:36 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/17 08:19:35 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	// A number raised to negative is zero
	if (power < 0)
		return (0);

	// Any number raised to 0 is 1
	if (power == 0)
		return (1);
	
	// The power is the number multiplied by itself certain times
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/* 
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
} */
