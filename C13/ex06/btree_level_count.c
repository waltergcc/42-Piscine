/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:52:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/09 15:17:16 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

int	btree_level_count(t_btree *root)
{
	int	count_left;
	int	count_right;

	if (root)
	{
		// runs the tree sides in a refusal way
		count_left = btree_level_count(root->left);
		count_right = btree_level_count(root->right);

		// compara qual o lado tem mais níves
		// Returns the value stored in the counter + 1 (which is the current level count)
		if (count_left > count_right)
			return (count_left + 1);
		else
			return (count_right + 1);
	}
	// If the root is null, the return is 0
	else
		return (0);
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

	// The tree receives the address The level1
	t_btree	*tree = &level1;

	// Count the levels that the tree has
	printf("How many leves the tree has? %d\n", btree_level_count(tree));
 } */