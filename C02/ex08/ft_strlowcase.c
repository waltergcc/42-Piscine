/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:16:30 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/08 17:20:48 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// If STR is between 'A' and 'Z' uppercase
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			// STR in the index position will receive itself more 32
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "ALL IS UPPERCASE";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strlowcase(str));
} */
