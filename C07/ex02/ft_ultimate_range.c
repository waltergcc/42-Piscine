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

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;

	// The array pointer receives the memory allocated to the size of the range between Max and Min
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	
	// If min is greater than max, array gets null and the returns is 0
	if (min >= max)
	{
		array = NULL;
		return (0);
	}

	// If 'array' is not null, array receives min
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}

		// The 'Range' pointer receives the 'array' values
		*range = array;

		// The return of this function is the size of the range
		return (i);
	}
	else
		// If there is any problem the return is -1
		return (-1);
}
/* 
int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range;
	int	size = ft_ultimate_range(&range, min, max);

	i = 0;
	printf("\nRange Size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
} */