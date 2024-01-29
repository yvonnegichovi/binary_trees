#include "binary_trees.h"

/**
* binary_tree_height - function takes a pointer to the root node of the binary tree (const binary_tree_t *tree) as its parameter.
* @tree: Pointer to the root node of the tree to measure of the height
*
* Return: 0 if the tree is NULL
*
*
*/

typedef struct binary_tree {
    int n;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

size_t max(size_t a, size_t b) {
    return (a > b) ? a : b;
}

size_t binary_tree_height(const binary_tree_t *tree) {
    // Check if the tree is NULL
    if (tree == NULL) {
        return 0;
    }

    // Recursively calculate the height of the left and right subtrees
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    // Return the maximum height between left and right subtrees, plus 1 for the current node
    return 1 + max(left_height, right_height);
}
