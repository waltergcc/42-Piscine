/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:52:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/08 01:38:32 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
/* 
int	ft_strcmp(void	*s1, void *s2)
{
		return ((char *)s1 - (char *)s2);
} */

// Creates a t_btree element that is a struct
t_btree	*btree_create_node(void	*item)
{
	t_btree	*node;

    // do memory allocation and check
	node = (t_btree *)malloc(sizeof(t_btree));
	if (!node)
		return (NULL);
	
    // assigns values to the struct variables
	node->item = item;
	node->left = NULL;
	node->right = NULL;

    // Returns the created element
	return (node);
}

// insert a new value on the binary tree
void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void*))
{
	t_btree	*node;

	// check if 'root' is null, if yes, it creates a new element
	if ((*root) == NULL)
		*root = btree_create_node(item);

	node = *root;

	// Checks if the item should be inserted on the left or right side of the current node
	if ((cmpf)(item, (*root)->item) < 0)
	{
		// check if the left side is empty
		if (node->left)

			// Call the function recursively to insert the item on the left side of the current node
			btree_insert_data(&node->left, item, cmpf);
		else
			// creates a new node on the left with the item provided
			node->left = btree_create_node(item);
	}
	else
	{
		// check if the right side is empty
		if (node->right)

			// Call the function recursively to insert the item on the right side of the current node
			btree_insert_data(&node->right, item, cmpf);
		else
			// creates a new node on the right with the item provided
			node->right = btree_create_node(item);
	}
}
/* 
// Prints the content of a node
void	ft_print(void *item)
{
	printf("%s ", (char *)item);
}

// Prints the binary tree from the current node
// in sequence the left subtree, and finally the right subtree
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	// Prints the node in the first time that is find
	applyf(root->item);

	// check if on the left is not empty
	if (root->left)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_prefix(root->left, applyf);

	// check if on the left is not empty
	if (root->right)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_prefix(root->right, applyf);
}

int main(void)
{
	// Creates a binary tree with 3 levels of depth
	// Each node contains a pointer to left child and to right child
	t_btree	level3_left_l = {NULL, NULL, "3"};
	t_btree	level3_left_r = {NULL, NULL, "4"};
	t_btree	level3_right_l = {NULL, NULL, "6"};
	t_btree	level3_right_r = {NULL, NULL, "7"};
	t_btree level2_left = {&level3_left_l, &level3_left_r, "2"};
	t_btree	level2_right = {&level3_right_l, &level3_right_r, "5"};
	t_btree	level1 = {&level2_left, &level2_right, "1"};

	// The tree receives the address The level1
	t_btree	*tree = &level1;

	printf("Binary tree before:\n");
	btree_apply_prefix(&level1, ft_print);

	// insert a new value on the binary tree
	btree_insert_data(&tree, "8", &ft_strcmp);

	printf("\n\nBinary tree after the first insert:\n");
	btree_apply_prefix(&level1, ft_print);

	// insert a new value on the binary tree
	btree_insert_data(&tree, "9", &ft_strcmp);

	printf("\n\nBinary tree after the second insert:\n");
	btree_apply_prefix(&level1, ft_print);
} */