#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: height of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree)
	{
		if (tree->parent)
			d = 1 + binary_tree_depth(tree->parent);
		else
			d = 0;

		return (d);
	}
	return (0);
}
