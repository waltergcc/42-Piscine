/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:05:41 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/15 18:31:17 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
	free(array);
}

int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i;
	int	*range;
	int	size;

	size = max - min;
	printf("\nRange Size: %d\n\n", ft_ultimate_range(&range, min, max));
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
