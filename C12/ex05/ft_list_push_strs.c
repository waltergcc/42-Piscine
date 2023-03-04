/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:39:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/04 22:55:49 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	// If 'size' is negative or zero, returns 0
	if(size <= 0)
		return (0);

	// list receives the string in the last position
	list = ft_create_elem((void *)strs[size - 1]);

	// The next position on the list receives the next string in a recursive way
	list->next = ft_list_push_strs(size - 1, strs);
	return(list);
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
		printf("String: %s\n", (char *)current->data);
		current = current->next;
	}
}

int main(void)
{
	char	**strs = (char **)malloc(sizeof(char *) * 3);
	t_list	*list = (t_list *)malloc(sizeof(t_list));
	
	strs[0] = "test";
	strs[1] = "of";
	strs[2] = "strings";
	list = ft_list_push_strs(3, strs);
	print_list(list);
	free(list);
	free(strs);
} */