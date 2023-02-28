/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:25:34 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/18 12:45:19 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs
	// the 'i' is increased to go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// while there are '+' and '-', 'i' is increased
	while (str[i] == '-' || str[i] == '+')
	{
		// If it's a minus sign
		// the value of the 'sign' is inverted
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// after the spaces and signs of + and -
	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	// In the end, if the number of '-' is even, the number will be positive
	// If the number of '-' is odd, the number will be negative
	return (sign * sum);
}
/* 
int	main(void)
{
	char *n = " ---+--+1234ab567";

	printf("My: %d\n", ft_atoi(n));
}*/