#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measeures height of binary tree
 * @tree: pointer to the root nod of the tree
 *
 * Return:height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
