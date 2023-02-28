/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:43:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/22 08:48:41 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 'a' and 'z' or between 'a' and 'z' the return is 0
		// the exclamation point before conditions means NOT
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	// If there is no correspondence without alpha, the return is 1
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "T stndo";
	char	*str2 = "Testndo";

	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));	
} */
