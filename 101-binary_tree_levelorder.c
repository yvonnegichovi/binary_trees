#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_levelorder - goes through binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 * The value in the node must be passed as a parameter to this function
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0, rear = 0;
	binary_tree_t **queue = NULL;
	const binary_tree_t *current = NULL;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = queue[front++];
		func(current->n);
		if (current->left != NULL)
			queue[rear++] = (binary_tree_t *)current->left;
		if (current->right != NULL)
			queue[rear++] = (binary_tree_t *)current->right;
	}
	free(queue);
}

