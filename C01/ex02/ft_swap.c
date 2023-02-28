/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:41:57 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/07 09:29:53 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	// This instruction exchanges the values to which pointers are pointing
	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	v1 = 15;
	int	v2 = 35;
	int	*a = &v1;
	int	*b = &v2;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);
} */
