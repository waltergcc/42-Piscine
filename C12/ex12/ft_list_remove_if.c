/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 01:11:27 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
// This function cleans what is on 'data'
void ft_free(void *data)
{
	printf("Value free: %d\n", *(int *)data);
	data = NULL;
}

int	ft_cmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
}
 */
// Removes elements from a listed list based on a reference value
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *list_ptr = *begin_list;
    t_list *prev = NULL;

    while (list_ptr)
    {
		// Check if the current element needs to be removed
        if (cmp(list_ptr->data, data_ref) == 0)
        {
			// Check if the element to be removed is the first on the list
            if (!prev)

				//Updates the start of the list
                *begin_list = list_ptr->next;
            else
				// Updates the "Next" pointer of the previous element
                prev->next = list_ptr->next;

			// Cleans and releases the content of the current element
            free_fct(list_ptr->data);
            free(list_ptr);

			// finish the while
            list_ptr = NULL;
        }
		else
		{
			// "PREV" points to the current element
			prev = list_ptr;

			// "List_ptr" points to the next element
			list_ptr = list_ptr->next;
		}
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
	int d = 1;
	
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	void *data_ref = &d;
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);
	printf("Linked list before:\n");
	print_list(linked_list);
	ft_list_remove_if(&linked_list, data_ref, &ft_cmp, &ft_free);
	printf("Linked list after:\n");
	print_list(linked_list);
	free(linked_list);
} */