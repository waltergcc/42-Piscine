/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:52:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/08 01:12:22 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
/* 
// Prints the content of a node
void	ft_print(void *item)
{
	printf("%s\n", (char *)item);
} */

// Prints the binary tree from the left subtree
// in sequence the right subtree, and finally the current node
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	// check if on the left is not empty
	if (root->left)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_suffix(root->left, applyf);
	
	// check if on the left is not empty
	if (root->right)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_suffix(root->right, applyf);
		
	// Prints the node in the third time that is find
	applyf(root->item);
}
/* 
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

	// Applies the suffix order to the binary tree
	btree_apply_suffix(&level1, ft_print);
}  */