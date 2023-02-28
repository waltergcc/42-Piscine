/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:54:32 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/16 10:37:00 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
	free(array);
}
/*
int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i;
	int	*range;
	int	size;

	size = max - min;
	range = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
