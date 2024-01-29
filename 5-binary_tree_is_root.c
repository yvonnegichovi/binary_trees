#include "binary_trees.h"
/**
 * binary_tree_is_root - function takes a pointer to a node (const binary_tree_t *node) as an argument.
 * @node: the function checks if the node has no parent (node->parent == NULL)
 * Return:  If the node has no parent, it is considered a root, and the function returns 1.
 *  Otherwise :it returns 0.
 */

typedef struct binary_tree {
    int n;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

int binary_tree_is_root(const binary_tree_t *node) {
    // Check if the node is NULL
    if (node == NULL) {
        return 0;
    }

    // A node is a root if it has no parent
    return (node->parent == NULL) ? 1 : 0;
}
