/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:42:27 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/16 19:44:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;

	// The result for negative factorial is zero
	if (nb < 0)
		return (0);

	// If 'nb' is zero, do not enter the loop. Returns the result that is 1
	// While 'nb' is greater than zero, result gets the result * the current nb
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/* 
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
} */