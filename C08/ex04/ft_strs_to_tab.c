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

// Copies one string for another
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

// This function will return a strut array
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	// defines an array for the struct
	struct s_stock_str	*arr;
	int					i;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;

	// while 'i' is less than the number of parameters
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		// assign values to the variables of the struct
		arr[i].size = ft_lenght(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);

		// If one of the strings is null, the return is null
		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	// The last position of the string receives the null
	arr[i].str = NULL;
	return (arr);
}

//the returns of ft_strs_to_tab come to this function
/* void	print_array(t_stock_str *str)
{
	int	i;

	i = 0;

	// Until reach the null the struct informations are printed
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
} */