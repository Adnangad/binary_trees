#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measeures depth of binary tree
 * @tree: pointer to the root nod of the tree
 *
 * Return:height of the tree or 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (binary_tree_depth(tree->parent) + 1);
}
