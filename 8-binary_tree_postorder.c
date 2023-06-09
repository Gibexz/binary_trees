#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a
 * binary tree using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The 'n' value
 * in the node must be passed to this function as a parameter
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
