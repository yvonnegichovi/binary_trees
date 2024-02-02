#include "binary_trees.h"
/**
 * binary_tree_is_root - function takes a pointer to a node (const binary_tree_t *node) as an argument.
 * @node: the function checks if the node has no parent (node->parent == NULL)
 * Return:  If the node has no parent, it is considered a root, and the function returns 1.
 *  Otherwise :it returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node) {
    if (node == NULL) {
        return 0;
    }
    return (node->parent == NULL) ? 1 : 0;
}
