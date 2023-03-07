/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 13:49:27 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Merge the two lists
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current;
	t_list	*prev;

	// 
	current = (*begin_list1);
	while(current != NULL)
	{
		prev = current;
		current = current->next;
	}

	// merge 'list_2' to the end of 'list_1'
	prev->next = begin_list2;
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
	t_list	*list_1 = (t_list *)malloc(sizeof(t_list));
	t_list	*list_2 = (t_list *)malloc(sizeof(t_list));

	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 7;
	int e = 8;
	int f = 9;

	// declaration and assign of pointers
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;
	void *p5 = &e;
	void *p6 = &f;

	// Creation of List_1 Elements
	list_1 = ft_create_elem(p1);
	list_1->next = ft_create_elem(p2);
	list_1->next->next = ft_create_elem(p3);

	// Creation of List_2 Elements
	list_2 = ft_create_elem(p4);
	list_2->next = ft_create_elem(p5);
	list_2->next->next = ft_create_elem(p6);

	printf("List 1 before:\n");
	print_list(list_1);

	// Merge the two lists
	ft_list_merge(&list_1, list_2);

	printf("\nList 1 after:\n");
	print_list(list_1);

	// free of memory allocated
	free(list_1);
	free(list_2);
} */