#include "binary_trees.h"

/**
 * binary_tree_height - function takes a pointer to the
 * root node of the binary tree
 * (const binary_tree_t *tree) as its parameter.
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if the tree is NULL, otherwise the height of the tree
 */
int main(void) {
size_t binary_tree_height(const binary_tree_t *tree)
	{
if (tree == NULL)
{
return (0);
}
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return (left_height > right_height ? left_height : right_height);
return (0);
}
}
