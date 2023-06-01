#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the number of nodes a binary tree
 * @tree: pointer to the root node of the binary tree to measure
 *
 * Return: nos. of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
