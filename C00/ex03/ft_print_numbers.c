/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorre-@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:41:43 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/05 16:00:14 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';

	//while number is less than or equal '9'
	while (number <= '9')
	{
		//print number
		write(1, &number, 1);

		//go to next number
		number++;
	}
}
/* 
int	main(void)
{
	ft_print_numbers();
} */