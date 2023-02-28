/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:27:16 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/22 08:10:29 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int current, int output[])
{
	int	i;
	int	j;

	// If the current number is equal to the requested number
	// The number will be printed
	if (current == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(output[i] + '0');
			i++;
		}

		// If the number is not the last possible, the comma is printed
		if (output[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		// After printing, the code comes out of the recursive function
		return ;
	}
	j = start;
	while (j <= (10 - (n - current)))
	{
		// The array keeps the possible numbers of each combination
		output[current] = j;
		ft_print_combn_recursive(n, j + 1, current + 1, output);
		j++;
	}
}

void	ft_print_combn(int n)
{
	// This array will store the combinations
	int	output[10];

	// Combinations are only started if it's between 1 and 9
	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, 0, 0, output);
	else
		return ;
}
/* 
int	main(void)
{
	ft_print_combn(2);
} */