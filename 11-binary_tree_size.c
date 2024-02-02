#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum;

	if (tree == NULL)
		return (0);
	sum = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (sum);
}
