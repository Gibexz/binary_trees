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
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the binary tree to measure
 *
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left - right);
}

/**
 *
 *
 *
 *
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_balance(tree) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
