/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 14:17:41 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Insert a new element at the end of the chained list
void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list    *node;

    node = *begin_list;

	// If the list is not empty, it creates a new element and adds it at the ending
    if (node)
    {
		// Until it reaches the last value of the list
		// 'node_next' receives the new element
        while (node->next)
            node = node->next;
        node->next = ft_create_elem(data);
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
	
	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	// declaration and assign of pointers
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;

	// Creation of List Elements
	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	linked_list->next->next = ft_create_elem(p3);

	printf("Linked list before:\n");
	print_list(linked_list);

	// Insert a new element at the end of the chained list
	ft_list_push_back(&linked_list, p4);

	printf("\nLinked list after:\n");
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
} */