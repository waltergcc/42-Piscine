/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 13:52:17 by wcorrea-         ###   ########.fr       */
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
 */
// If the 'data' value is equal to the reference to the function returns the value found
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp) ())
{
	t_list* list_ptr;

	list_ptr = begin_list;
	while(list_ptr != NULL)
	{
		// If the 'data' value is equal to the reference to the function returns the value found
		if((*cmp)(list_ptr->data, data_ref) == 0)
			return(list_ptr);

		// advances to the next list
		list_ptr = list_ptr->next;
	}
	// If the value is not found, the return is null
	return(NULL);
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

	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 2;
	
	// declaration and assign of pointers
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	void *data_ref = &d;

	// Creation of List Elements
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);

	printf("Linked list before:\n");
	print_list(linked_list);

	// If the 'data' value is equal to the reference to the function returns the value found
	if (ft_list_find(linked_list, data_ref, &ft_cmp))
		printf("\nValue found? %d\n", *(int *)ft_list_find(linked_list, data_ref, &ft_cmp)->data);
	
	// free of memory allocated
	free(linked_list);
} */