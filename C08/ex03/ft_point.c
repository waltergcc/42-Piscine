/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:26:06 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/02 21:26:10 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	// defines the values for the struct variables
	point-> x = 42;
	point-> y = 21;
}
int	main(void)
{
	t_point point;
	
	set_point(&point);
	printf("Valor de x: %d\n", point.x);
    printf("Valor de y: %d\n", point.y);
	return (0);
}
