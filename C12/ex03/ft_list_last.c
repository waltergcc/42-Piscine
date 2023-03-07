/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 14:20:02 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Show the last value of the list
t_list	*ft_list_last(t_list *begin_list)
{
	// If the list is empty returns null
	if (!begin_list)
		return (NULL);
	
	// Until it reaches the last value of the list
	// 'begin_list' receives the value of next
	while (begin_list->next)
		begin_list = begin_list->next;

	// The last value stored in 'begin_list' is returned
	return (begin_list);
}
/* 
// Creates a t_list element that is a struct
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

    // do memory allocation and check
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

    // assigns values to the struct variables
	elem->data = data;
	elem->next = NULL;

    // Returns the created element
	return (elem);
}

// Prints the values contained in each element of the chained list
void	print_list(t_list *list)
{
	t_list *current = list;

	while (current != NULL)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int main(void)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;

	// declaration and assign of pointers
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;

	// Creation of List Elements
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);

	printf("All values of list:\n");
	print_list(linked_list);
	
	// Show the last value of the list
	printf("\nThe last value of list:\n");
	print_list(ft_list_last(linked_list));

	// free of memory allocated
	free(linked_list);
} */