/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:10:46 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/17 13:21:51 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// We use the function created in the previous exercise
// To check if 'nb' is prime or not
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	// While 'nb' is not prime, 'nb' is increased
	while (ft_is_prime(nb) == 0)
		nb++;

	// In the end, only a prime number is returned
	return (nb);
}
/* 
int	main(void)
{
	printf("What is the next prime of -3? %d\n", ft_find_next_prime(-3));
	printf("What is the next prime of 6? %d\n", ft_find_next_prime(6));
	printf("What is the next prime of 13? %d\n", ft_find_next_prime(13));
	printf("What is the next prime of 25? %d\n", ft_find_next_prime(25));
	printf("What is the next prime of 84? %d\n", ft_find_next_prime(84));
} */
