/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:57:48 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/20 19:08:54 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*arr;

	arr = (char *) malloc(sizeof(char) * (ft_lenght(str) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		arr[i].size = ft_lenght(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
/*
void	print_array(t_stock_str *str)
{
	int	i;

	i = 0;
	while (str[i].str != NULL)
	{
		printf("Indice: %d - Size: %d - String: %s - Copy: %s\n",
		i, str[i].size,	str[i].str, str[i].copy);
	       i++;	
	}
	free(str);
}

int	main(int argc, char **argv)
{
	print_array(ft_strs_to_tab(argc, argv));
}*/
