##include "binary_trees.h"

/**
 * binary_tree_postorder -function takes two parameters:
 * a pointer to the root node of the binary tree (const binary_tree_t *tree)
 * and a function pointer (void (*func)(int)) representing a
 * function to be called for each node.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
