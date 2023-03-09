#include "list.h"
// #include <stdio.h>
// #include <stdlib.h>
/* 
int	ft_cmp(int a, int b)
{
	return (a >= b);
}
 */
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	void *temp;
	t_list *current;

	current = lst;
	while (lst->next != 0)
	{
		// Checks if the current element is equal the next
		if (((*cmp)(*(int *)lst->data, *(int *)lst->next->data)))
		{
			// Make the swap of values
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;

			// The order restarts from the beginning of the list
			lst = current;
		}
		else
			lst = lst->next;
	}
	// The order restarts from the beginning of the list
	lst = current;
	return (lst);
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
	t_list	*list = (t_list *)malloc(sizeof(t_list));

	// declaration of values
	int a = 3;
	int b = 1;
	int c = 2;

	// declaration and assign of pointers
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;

	// Creation of List Elements
	list = ft_create_elem(p1);
	list->next = ft_create_elem(p2);
	list->next->next = ft_create_elem(p3);

	printf("List 1 before:\n");
	print_list(list);

	// Sort the list in crescent order
	sort_list(list, &ft_cmp);

	printf("\nList 1 after:\n");
	print_list(list);

	// free of memory allocated
	free(list);
} */