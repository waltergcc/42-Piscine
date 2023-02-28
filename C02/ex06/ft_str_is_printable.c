/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:57:03 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/08 15:05:15 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 32 and 126 in the ASCII Table the return is 0
		// The printable characters range from 32 ' ' to 126 '~'
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "aB3/!'.;Ko+";
	char	*str2 = "aB3/!'.;Ko±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
} */
