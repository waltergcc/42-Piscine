/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/06 22:33:57 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
int	ft_cmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
}

// This function multiplied the value passed by 3
void ft_mul(void *data)
{
	*(int *)data *= 3;
}
 */
// Adds one value for each item on the list if data' is equal to 'data_ref'
void ft_list_foreach_if(t_list *begin_list, void(*f)(void *), void *data_ref, int (*cmp) ())
{
	t_list* list_ptr;

	list_ptr = begin_list;
	while(list_ptr != NULL)
	{
		// Only increases the value of 'data' if 'data' is equal to the reference
		if((*cmp)(list_ptr->data, data_ref) == 0)
			(*f)(list_ptr->data);

		// advances to the next list
		list_ptr = list_ptr->next;
	}
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

	while (current)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int main(void)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 3;
	
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	void *data_ref = &d;
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);
	printf("Linked list before:\n");
	print_list(linked_list);
	ft_list_foreach_if(linked_list, &ft_mul, data_ref, &ft_cmp);
	printf("Linked list after:\n");
	print_list(linked_list);
	free(linked_list);
} */