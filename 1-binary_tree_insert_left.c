#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: pointer to the node to insert the left-child in
 *
 * Return: pointer to the created node, or NULL on failure
 * or if the parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;
	return newnode;
}
