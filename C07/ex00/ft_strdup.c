/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:45:52 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/15 18:30:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	dest = (char *) malloc(sizeof(char) * (lenght + 1));
	if (dest != NULL)
	{
		i = 0;
		while (i < lenght)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
/*
int	main(void)
{
	char	*src = "Char";

	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}*/
