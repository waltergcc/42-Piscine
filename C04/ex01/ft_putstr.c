/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:55:34 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/11 17:04:36 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i] != '\0')
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}
}
/* 
int	main(void)
{
	char	*str = "Print the string";
	
	ft_putstr(str);
} */
