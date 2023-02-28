/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:22:33 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/22 08:57:07 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	// Let's call the function we created in the previous exercise
	// Calling the Lowercase function will transform all uppercase characters into lowercase
	ft_strlowcase(str);

	// If the first character is lowercase, it will pass to uppercase
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		// If the character before the current is not number or letters
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			// with the previous condition and the current character is lowercase
			// The current character is passed to uppercase
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
} */