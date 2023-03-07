/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 14:05:14 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Returns the list in the position passed by 'nbr'
t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *current = begin_list;
    unsigned int i = 0;

	// While the list is not over and the counter is smaller than 'nbr'
    while (current != NULL && i < nbr)
    {
		// The list in the current position is receiving the next
        current = current->next;
        i++;
    }

	// If 'i' is equal to the number past, returns the value of the list
    if (i == nbr && current != NULL)
        return (current);

	// If not it returns null
    else
        return (NULL);
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
 
int main(void)
{
	t_list	*linked_list;

	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;

	// declaration and assign of pointers
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	int	n = 3;

	// Creation of List Elements
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);

	// Returns the list in the position passed by 'nbr'
	if (ft_list_at(linked_list, n))
		printf("Value of position %d: %d\n", n, *(int *)ft_list_at(linked_list, n)->data);

	// free of memory allocated
	free(linked_list);
} */