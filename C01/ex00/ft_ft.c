/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:07:48 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/07 17:39:45 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ft(int *nbr)
{
	// This instruction tells the nbr pointer that the address must receive the value 42
	// This means that the variable n called on Main will now have the value 42
	*nbr = 42;
}

/* int	main(void)
{
	int n = 1;
	int *nbr = &n;

	printf("Before ft_ft: \n");
	printf("Variable 'nbr' points to adress %p that has the value %d stored\n", &n, n);
	printf("Pointer 'nbr' points to the same adress %p that has the value %d stored\n", nbr, *nbr);
	ft_ft(nbr);
	printf("\n");
	printf("After ft_ft: \n");
	printf("Pointer 'nbr' remains pointing to adress %p, but now that has the value %d stored\n", nbr, *nbr);
	printf("Now 'n' has the value %d stored\n", n);
} */
