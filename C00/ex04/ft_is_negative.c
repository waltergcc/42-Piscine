/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:41:37 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/05 16:01:54 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

//check if number received as parameter is negative or positive
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}	
}
/* 
int	main(void)
{
	ft_is_negative(42);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-42);
	printf("\n");
} */
