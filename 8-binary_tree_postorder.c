##include "binary_trees.h"

/**
 * binary_tree_postorder -function takes two parameters: a pointer to the root node of the binary tree (const binary_tree_t *tree)
 * and a function pointer (void (*func)(int)) representing a function to be called for each node.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 */

typedef struct binary_tree {
    int n;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)) {
    // Check if tree or func is NULL
    if (tree == NULL || func == NULL) {
        return;
    }

    // Perform post-order traversal
    binary_tree_postorder(tree->left, func);   // Recursively traverse the left subtree
    binary_tree_postorder(tree->right, func);  // Recursively traverse the right subtree
    func(tree->n);  // Call the function for the current node
}
