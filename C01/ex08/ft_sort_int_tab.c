/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:29 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/05 19:08:19 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	// Two whiles with two counters will compare each position of the array with each other
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			// If a larger number is found in position j, the exchange is made
			// In the end the smaller numbers are in the beginning and the largest at the end
			if (tab[i] <= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}	
}
/* 
int	main(void)
{
	int	tab[10] = {5, 3, 2, 9, 4, 8, 0, 7, 1, 6};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_sort_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
} */ 