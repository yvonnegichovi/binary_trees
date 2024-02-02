#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 *
 * Description: If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst_util - Utility function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * @min: Minimum value allowed for a node in the subtree
 * @max: Maximum value allowed for a node in the subtree
 *
 * Return: 1 if tree is a valid BST, 0 otherwiaw
 */

int is_bst_util(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_bst_util(tree->left, min, tree->n - 1) &&
			is_bst_util(tree->right, tree->n + 1, max));
}
