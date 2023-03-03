/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:24:39 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 23:24:43 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h>

int ft_square(int n)
{
	return (n * n);
} */

// This function receives the pointer of ft_square function as a parameter
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*squared_tab;

	squared_tab = (int *)malloc(sizeof(int) * length);
	if (squared_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
        // 'Squared_tab'receives the value of each position
        // of 'tab' multiplied by the past function as a pointer
		squared_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (squared_tab);
}
/* 
int main (void)
{
	int	i;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 10;
	int *squared_tab;

	squared_tab = ft_map(tab, length, &ft_square);
	i = 0;
	while ( i < length)
	{
		printf( "%d\n", squared_tab[i]);
		i++;
	}
} */