#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another
 * @parent: the pointer to the node to be inserted at
 * @value: value of the new node
 *
 * Return: pointer to the new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
