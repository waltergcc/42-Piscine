/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:15:03 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/15 18:31:35 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_all_lenght(int size, char **strs, char *sep)
{
	int		i;
	int		result;
	char	*str;

	result = 0;
	i = 0;
	while (i < size)
	{
		result += ft_lenght(strs[i]);
		i++;
	}
	result += ft_lenght(sep) * size - 1;
	if (size <= 0)
		result = 1;
	str = (char *) malloc(sizeof(char) * result);
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*str;

	str = ft_all_lenght(size, strs, sep);
	i = 0;
	c = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			str[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[c++] = sep[j++];
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	printf("Result: %s - size: %d", ft_strjoin(argc, argv, " "), argc);
}*/
