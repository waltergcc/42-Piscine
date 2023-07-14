/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:47:06 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/03 19:44:13 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print the char received as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
 
int	main(void)
{
	ft_putchar('a');
}
