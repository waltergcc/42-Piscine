/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:55:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/11 11:51:02 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	// If to_find is empty, the string is returned whole
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		// Looking for the first correspondence between STR and TO_FIND
		// while they are equal the 'j' counter is added
		// 'i' remains with the value of the first correspondence
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			// If 'j' next position is equal to the null
			// Is returned the string from position of 'i'
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}	
		++i;
	}	
	return (0);
}
/* 
int	main(void)
{
	char *str = "Try to find this part of the text";
	char *to_find = "to find";

	printf("Returned: %s\n", ft_strstr(str, to_find));
} */
