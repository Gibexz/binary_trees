#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_height - function that returns the height of a binary tree
 * @tree: pointer to the binary tree
 *
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		if (tree->left)
			l = 1 + binary_tree_height(tree->left);
		else
			l = 0;
		if (tree->right)
			r = 1 + binary_tree_height(tree->right);
		else
			r = 0;
		return ((l > r) ? l : r);
	}
		return (0);
}

/**
 * binary_tree_is_perfect - checks of a tree is perfect
 * @tree: pointer to binary tree to check
 *
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (!tree->left || !tree->right)
			return (0);
		if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
			return (0);
		else
			return (1);

		return (1 * binary_tree_is_perfect(tree->right)
				* binary_tree_is_perfect(tree->left));
	}
	return (0);
}
