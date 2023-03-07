/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:52:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/07 19:06:03 by wcorrea-         ###   ########.fr       */
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

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	// Prints the content of a node
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

	// Applies the prefix function to the binary tree
	btree_apply_prefix(&level1, ft_print);
} */