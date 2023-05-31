#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a leaf
 * @node: node to check
 *
 * Return: return 1 if node is a leaf, else 0, if node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
