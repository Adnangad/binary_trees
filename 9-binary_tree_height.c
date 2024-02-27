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
	size_t l;
	size_t r;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;
	if (l > r)
		return (l);
	else
		return (r);
}
