#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_complete(tree, 0, count_nodes(tree)));
}

/**
 * is_complete - recursive function to check if a binary tree is complete
 * @tree: pointer to the current node
 * @index: index of the current node
 * @num_nodes: total number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwiae
 */

int is_complete(const binary_tree_t *tree, size_t index, size_t num_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= num_nodes)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, num_nodes) &&
			is_complete(tree->right, 2 * index + 2, num_nodes));
}

/**
 * count_nodes - counts the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes in the tree
 */

size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
