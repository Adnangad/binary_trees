#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return:pointer to the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent->parent;

	if (temp->left == NULL || temp->right == NULL)
		return (NULL);
	if (node == temp->left->left || node == temp->left->right)
		return (temp->right);
	else if (node == temp->right->left || node == temp->right->right)
		return (temp->left);
	else
		return (NULL);
}
