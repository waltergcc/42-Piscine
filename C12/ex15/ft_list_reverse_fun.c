/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 17:19:15 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*current;
	t_list	*next;
	t_list	*temp;

	current = begin_list;
	while(current)
	{
		// 'Next' receives the next address from 'Current'
		next = current->next;
		while(next)
		{
			// Make the swap of values
			temp = current->data;
			current->data = next->data;
			next->data = temp;

			// 'next' go to the next position
			next = next->next;
		}
		// 'current' go to the next position
		current = current->next;
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
	// declaration of the lists
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
	linked_list->next->next->next = ft_create_elem(p4);

	printf("List 1 before:\n");
	print_list(linked_list);

	// reverses the order of the elements by exchanging the data of the node
	ft_list_reverse_fun(linked_list);

	printf("\nList 1 after:\n");
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
} */