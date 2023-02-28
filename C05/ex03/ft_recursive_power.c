/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:00:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/17 08:15:50 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

int	ft_recursive_power(int nb, int power)
{
	// A number raised to negative is zero
	if (power < 0)
		return (0);
	
	// Any number raised to 0 is 1
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}
/* 
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
} */
