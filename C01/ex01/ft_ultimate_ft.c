/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:37:46 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/07 12:21:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	// With this instruction all the pointers who are pointing to 
	// the same address will now point to the value 42
	*********nbr = 42;
}
/* 
int	main(void)
{
	int	number = 1024;
	int	*ptr1 = &number;
	int	**ptr2 = &ptr1;
 	int	***ptr3 = &ptr2;
 	int	****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
 	int	******ptr6 = &ptr5;
 	int	*******ptr7 = &ptr6;
 	int	********ptr8 = &ptr7;
 	int	*********ptr9 = &ptr8;

	printf("'Number' has the adress %p and the value %d\n", &number, number);
	printf("ptr1 points to same adress of 'Number'%p and has the same value %d\n", ptr1, *ptr1);
	printf("ptr9 points to a different adress of 'Number'%p but the adresses are connected. It has the same value %d\n", ptr9, *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("\n");
	printf("After ft_ultimate_ft: \n");
	printf("Pointer 'ptr9' remains pointing to adress %p, but now that has the value %d stored\n", ptr9, *********ptr9);
	printf("'Number' remains pointing to adress %p, but now that has the value %d stored\n", &number, number);
} */