/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:26:51 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/08 14:39:21 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 'a' and 'z' in lowercase the return is 0
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "wordsandletters";
	char	*str2 = "wordsandlEtters";

	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));	
	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
} */
