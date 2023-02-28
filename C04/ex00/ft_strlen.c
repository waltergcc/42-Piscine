/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:40:23 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/11 15:52:52 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
	char	*str = "letters";

	printf("The string %s has a lenght of %d\n", str, ft_strlen(str));
} */
