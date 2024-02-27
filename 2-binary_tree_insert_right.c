#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: the pointer to the node to be inserted at
 * @value: value of the new node
 *
 * Return: pointer to the new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
        {
                return (NULL);
        }
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
