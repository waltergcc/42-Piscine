/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:51:43 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/18 19:49:47 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// prime numbers are numbers that are only divisible by themselves
int	ft_is_prime(int nb)
{
	int	i;

	// negative numbers, 0 and 1 are not prime
	if (nb <= 1)
		return (0);

	// The counter receives the smallest prime
	i = 2;

	// check if 'i' is less than or equal to the square root of nb
	// Any number larger than the square root cannot be an 'nb' divider.
	while (i <= nb / i)
	{
		// If the rest of the division of 'nb' by 'i' for 0, this number is not prime
		if (nb % i == 0)
			return (0);
		i++;
	}
	// If the loop ends without finding a divider, 'nb' is prime
	return (1);
}
/* 
int	main(void)
{
	printf("-7 is prime? %d\n", ft_is_prime(-7));
	printf("0 is prime? %d\n", ft_is_prime(0));
	printf("2 is prime? %d\n", ft_is_prime(2));
	printf("3 is prime? %d\n", ft_is_prime(3));
	printf("5 is prime? %d\n", ft_is_prime(5));
	printf("6 is prime? %d\n", ft_is_prime(6));
	printf("23 is prime? %d\n", ft_is_prime(23));
} */
