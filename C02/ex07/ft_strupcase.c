/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:17:52 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/08 17:15:55 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is between 'a' and 'z' lowercase
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// STR in the index position will receive itself less 32
			// 32 It's the difference in the ASCII table between the letter lowercase and uppercase
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "all is lowercase";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
} */
