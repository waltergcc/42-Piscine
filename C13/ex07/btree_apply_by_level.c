/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:52:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/09 15:42:30 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

// declares two global variables
int	level_global = 0;
int	first_global = 1;
/* 
void	ft_print(void *item, int current_level, int is_first_elem)
{
	printf("[Level = %d] (Is the first? %d) %s\n", current_level, is_first_elem, (char *)item);
} */

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	// If the tree is empty, the global variable is negative and comes out of the function
	if (!root)
	{
		level_global--;
		return ;
	}

	// prints the current item and increase the level
	applyf(root->item, level_global, first_global);
	level_global++;
	
	// Recursively call the function for the left child of the root an increases a level
	btree_apply_by_level(root->left, applyf);

	// If the left child exists, 'First' receives 0, because the father has already been printed
	if (root->left)
		first_global = 0;
	level_global++;

	// Recursively call the function for the left son of the root and decreases a level
	btree_apply_by_level(root->right, applyf);
	level_global--;
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
	btree_apply_by_level(tree, ft_print);
} */