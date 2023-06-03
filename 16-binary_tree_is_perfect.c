#include "binary_trees.h"
/**
 * power - calculates the power exponent of the base
 * @base: base of the power
 * @exponent: exponent of the power
 *
 * Return: The power
 */
int power(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
	{
	result = result * base;
	}
	return (result);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 *
 * Return: size = number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

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
	int height, size, perfect_size;

	if (tree)
	{
		height = binary_tree_height(tree);
		size = binary_tree_size(tree);
		perfect_size = (power(2, height + 1)) - 1;
		if (size == perfect_size)
			return (1);
		else
			return (0);
	}
	return (0);
}
