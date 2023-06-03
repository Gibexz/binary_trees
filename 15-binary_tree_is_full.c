#include "binary_trees.h"
/**
 * binary_tree_is_full - checks of a tree is full
 * @tree: pointer to binary tree to check
 *
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (!tree->left || !tree->right)
			return (0);
		return (1 * binary_tree_is_full(tree->right)
				* binary_tree_is_full(tree->left));
	}
	return (0);
}
