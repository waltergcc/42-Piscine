/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:54:25 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/07 10:26:36 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// While the string doesn't reach the null
	// the counter "i" will be increased
	while (str[i] != '\0')
		i++;

	// In the end the function returns the number of characters counted
	return (i);
}
/* 
int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
} */
