#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:pointer to the root node of the tree to check
 *
 * Return:1 if perfect else 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_is_perfect(tree->left) + 1;
	r = binary_tree_is_perfect(tree->right) + 1;

	if (l != r || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
		return (1);
}
