#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factory oof a binary tree
 * @tree:pointer to the root node of the tree
 *
 * Return: the balance or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	l = binary_tree_balance(tree->left) + 1;
	r = binary_tree_balance(tree->right) + 1;
	return (l - r);
}
