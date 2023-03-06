/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/06 15:52:35 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Insert a new element at the beginning of the chained list
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	// If the list is not empty, it creates a new element and adds it at the beginning
	if(*begin_list)
	{
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
	// If the list is empty, it creates a new element and defines it as the start of the list
	else
		*begin_list = ft_create_elem(data);
}

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
/* 
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
	linked_list = NULL;
	int a = 1;
	int b = 2;
	int c = 3;

	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	ft_list_push_front(&linked_list, ptr1);
	ft_list_push_front(&linked_list, ptr2);
	ft_list_push_front(&linked_list, ptr3);
	print_list(linked_list);
	free(linked_list);
} */