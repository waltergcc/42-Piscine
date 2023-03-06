/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/06 15:49:24 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
// This function is just to test
void print_and_free(void *data)
{
	printf("%d\n", *(int *)data);
	data = NULL;
}
 */
// limpa todas as informações da lista
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	// Variables are declared to prevent memory from being released at the wrong time
    t_list *current = begin_list;
    t_list *next;
    while (current != NULL)
    {   
        next = current->next;

		// Cleans the value stored on data
        (*free_fct)(current->data);

		// Releases the memory allocated to this element
        free(current);
        current = next;
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

int main(void)
{
	t_list	*linked_list;
	int a = 1;
	int b = 2;
	int c = 3;

	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);
	ft_list_clear(linked_list, &print_and_free);
	print_list(linked_list);
} */