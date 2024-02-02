#include "binary_trees.h"

/**
 * binary_tree_preorder - function takes two parameters:
 * a pointer to the root node of the binary tree (const binary_tree_t *tree)
 * and a function pointer
 * (void (*func)(int)) representing a function to be called for each node
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
