/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorre-@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:07:52 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/16 19:46:59 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	// If it is negative, returns 0
	if (nb < 0)
		return (0);

	// If it's 0 or 1, returns 1
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/* 
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
} */